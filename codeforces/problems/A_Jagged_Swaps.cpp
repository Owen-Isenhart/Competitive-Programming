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
    
    vi a(n);
    for (int& x : a) cin >> x;

    // can move a large element up one index only if it's bigger than both elements next to it
    // think it should be possible as long as the min is already at first index and max at last

    int min_i = distance(a.begin(), min_element(a.begin(), a.end()));
    if (min_i != 0) cout << "NO\n";
    else cout << "YES\n";
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