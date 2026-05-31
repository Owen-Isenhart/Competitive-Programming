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

    // find number with greatest frequency
    // unordered_map<int, int> freq;
    // for (auto x : a) freq[x] ++;

    
    sort(a.begin(), a.end());
    int mid = n/2;
    
    // find number of elements greater than mid element and number less than
    // if equal then answer is number of either side
    // if one is greater then it's number of either side + extra

    int less = 0, more = 0;
    for (int x : a){
        if (x > a[mid]){
            more ++;
        }
        else if (x < a[mid]){
            less ++;
        }
    }
    cout << max(more, less) << "\n";
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