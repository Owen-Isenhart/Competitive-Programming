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
    bool found = false;
    for (int a = 332; a > 0; a --){
        for (int b = 1; b < 1000-a-b; b ++){
            if ((a*a) + (b*b) == (ll)((1000-a-b)*(1000-a-b))){
                cout << a*b*(1000-a-b);
                found = true;
                break;
            }
        }
        if (found) break;

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; 
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}