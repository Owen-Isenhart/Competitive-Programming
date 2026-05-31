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
    // we could just find all primes up to there then see if they're divisible
    ll n = 600851475143;
    int max_prime = 2;
    while (n % 2 == 0){
        n /= 2;
    }
    // odds
    for (int i = 3; i < n; i += 2){
        while (n % i == 0){
            n /= i;
            max_prime = i;
        }
    }

    if (n > 2) max_prime = n;
    cout << max_prime;

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