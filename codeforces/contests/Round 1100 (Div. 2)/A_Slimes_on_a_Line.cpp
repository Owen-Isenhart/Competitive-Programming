#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n = 0;
        cin >> n;
        int min = INT32_MAX;
        int max = 0;
        for (int i = 0; i < n; i ++){
            int temp;
            cin >> temp;
            if (temp < min) min = temp;
            if (temp > max) max = temp;
        }

        int distance = max - min + 1;
        distance /= 2;
        cout << distance << endl;



    }

    return 0;
}