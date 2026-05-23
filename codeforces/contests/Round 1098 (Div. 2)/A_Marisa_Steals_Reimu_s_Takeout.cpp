#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        // every zero should automaticaly be plus 1
        int n;
        cin >> n;
        int res = 0;
        unordered_map<int, int> w = {};
        for (int i = 0; i < n; i ++){
            int temp;
            cin >> temp;
            if (temp == 0) res ++;
            else w[temp]++;
        }

        // best case is a one and two
        // worst is the all ones or all twos

        while (true){
            if (w[1] > 0 && w[2] > 0){
                res ++;
                w[1] --;
                w[2] --;
            } else if (w[1] > 2){
                w[1] -= 3;
                res ++;
            } else if (w[2] > 2){
                w[2] -= 3;
                res ++;
            }
            else break;
        }

        cout << res << endl;

    }

    return 0;
}