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

    // i think there's an easier way but if we build it it should be clear
    // 3 3 3 5 5 5
    // 3 5 3 5 5 3
    // 3 5 3 5 3 5

    sort(a.begin(), a.end());
    vi built(n);
    int left = 0;
    int right = n - 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            built[i] = a[left++];
        } else {
            built[i] = a[right--];
        }
    }

    int last = built[0] + built[1];
    bool good = true;
    for (int i = 0; i < n - 1; i++) {
        if (built[i] + built[i+1] != last) {
            good = false;
            break;
        }
    }

    if (good)
        cout << "Yes\n";
    else
        cout << "No\n";

    
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