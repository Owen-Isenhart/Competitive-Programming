#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;

constexpr int MOD = 1e9 + 7;
constexpr ll INF = 1e18;

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()

bool seatIntrovert(vi& tables, int s){
    for (int i = 0; i < tables.size(); i ++){
        if (tables[i] == s){
            tables[i]--;
            return true;
        }
    }
    return false;
}
bool seatExtrovert(vi& tables, int s){
    // want to choose table with least seats left
    int most_filled = INT32_MAX;
    int index = -1;
    for (int i = 0; i < tables.size(); i ++){
        if (tables[i] > 0 && tables[i] != s && tables[i] < most_filled){
            most_filled = tables[i];
            index = i;
        }
    }
    if (index != -1){
        tables[index] --;
        return true;
    }
    return false;
}
bool seatAmbivert(vi& tables, int s){
    // want to choose table with least seats left
    int most_filled = INT32_MAX;
    int index = -1;
    for (int i = 0; i < tables.size(); i ++){
        if (tables[i] > 0 && tables[i] < most_filled){
            most_filled = tables[i];
            index = i;
        }
    }
    if (index != -1){
        tables[index] --;
        return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int s;
    cin >> s;

    vi tables(x, s);
    string u;
    cin >> u;

    // if we reach an introvert, just have to add one to total and subtract a table

    int res = 0;
    for (int i = 0; i < u.length(); i ++){
        if (u[i] == 'I'){
            if (seatIntrovert(tables, s)) res ++;
        } else if (u[i] == 'E'){
            if (seatExtrovert(tables, s)) res ++;
        } else{
            if (seatAmbivert(tables, s)) res ++;
        }
    }
    cout << res << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; 
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}