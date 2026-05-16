#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> x(n);
    set<int> s;
    for (int i = 0; i < n; i ++){
        cin >> x[i];
        s.insert(x[i]);
    }
    cout << s.size() << endl;
    
    return 0;
}