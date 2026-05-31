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
    int k;
    cin >> k;

    vi a(n);
    for (int& x : a) cin >> x;

    // when is the only time we won't be able to
    // i think it's just if k is 1 and it's not already sorted
    bool sorted = true;
    for (int i = 0; i < n - 1; i ++){
        if (a[i] > a[i+1])
            sorted = false;
    }
    if (!sorted && k == 1)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
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