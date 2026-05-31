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
    
    vll a(n);
    for (ll& x : a) cin >> x;

    ll sum = 0;
    ll h = LONG_LONG_MAX;

    // god im so fucking dumb

    for (int i = 0; i < n; i ++){
        sum += a[i];
        ll avg = sum / (i + 1);
        
        h = min(h, avg);
        cout << h << " ";
    }

    cout << "\n";
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