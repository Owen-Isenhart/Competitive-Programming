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

bool checkPalidrome(string s){
    int l = 0, r = s.length() - 1;
    while (l <= r){
        if (s[l] != s[r]) return false;
        l ++;
        r --;
    }
    return true;
}

int dfs(int n1, int n2, vector<vector<int>>& palindromes){
    if (n1 < 100 || n2 < 100) return 0;
    if (palindromes[n1][n2] != -1) return palindromes[n1][n2];
    int product = n1*n2;
    int val = checkPalidrome(to_string(product)) ? product : 0;

    return palindromes[n1][n2] = max({val, dfs(n1-1, n2, palindromes), dfs(n1, n2-1, palindromes)});
}

void solve() {
    vector<vector<int>> palindromes(1000, vector<int>(1000, -1));
    int res = dfs(999, 999, palindromes);
    cout << res;

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