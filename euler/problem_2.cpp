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
    
    int prev = 1;
    int curr = 2;

    int sum = 0;

    while (curr < 4000000){
        if (curr % 2 == 0) sum += curr;
        int temp = prev + curr;
        prev = curr;
        curr = temp;
    }
    cout << sum << "\n";

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