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
    int x;
    cin >> x;

    vi a(n);
    for (int& x : a) cin >> x;

    // the main limiter is the biggest gap in gas stations
    // for example:
    // 3 7
    // 1 2 5
    // there's a gap of 4 from 5, 6, 7, 6, 5

    // 3 6
    // 1 2 5
    // there's a gap of 3 from 2, 3, 4, 5

    // find the biggest gap
    // we find left gap and right gap for each

    int res = 1;
    for (int i = 0; i < n; i ++){
        int closest_l = 0;
        if (i > 0){
            closest_l = a[i-1];
        }
        int dist_l = a[i] - closest_l;
        int closest_r = x;
        if (i < n - 1){
            closest_r = a[i+1];
        }
        int dist_r = closest_r - a[i];
        if (closest_r == x) dist_r = dist_r * 2;

        res = max(res, dist_l);
        res = max(res, dist_r);
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