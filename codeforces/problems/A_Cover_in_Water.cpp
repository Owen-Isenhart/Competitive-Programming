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

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    // if there's three dots in a row, the answer is 2 no matter what
    // otherwise it's just the number of dots

    if (s.find("...") != string::npos){
        cout << "2\n";
    } else{
        int count = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == '.') count ++;
        }
        cout << count << "\n";
    }

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