#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i ++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        // can select an index if element at the index is positive
        // then for every index below it, switch the signs
        // we should be concerned with how many times an index will be flipped, and that will guide our answer
        

    }

    return 0;
}