#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i ++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i ++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int res = 0;
    int i, j = 0;
    while (i < n && j < m){
        
    }

    cout << res << endl;
    
    return 0;
}