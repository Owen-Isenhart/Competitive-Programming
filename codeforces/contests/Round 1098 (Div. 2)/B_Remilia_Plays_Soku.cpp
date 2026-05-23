#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;

        // don't see how this isn't just k plus distance between x1 and x2

        int res = k + min(abs(x1-x2), abs(x1-x2-n));
        
        cout << res << endl;
    }

    return 0;
}