#include <bits/stdc++.h>
#define ll long long
using namespace std;


void dfs(int n, int x, int y, int a, int b, set<int> aTurns, set<int> bTurns){
    if (aTurns.size() > n){
        return;
    }
    else if (x == a && y == b){
        for (const auto &turn : aTurns){
            cout << turn << " ";
        }
        for (const auto &turn : bTurns){
            cout << turn << " ";
        }
        return;
    }
    else if (x > a || y > b){
        return;
    }
    else{

        for (const auto &turn : aTurns){
            if (aTurns.find(n-turn) == aTurns.end()){
                aTurns.insert(n-turn);
                
            }
        }
        //dfs(n, )
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i ++){
        int n, a, b;
        cin >> n >> a >> b;

        // if there's a game that works, print yes with the example game
        // else print no

        if (a > n - 1 || b > n - 1 || a + b > n || (a % 2 == 1 && b == 0 && n % 2 == 0) || (b % 2 == 1 && a == 0 && n % 2 == 0) ){
            cout << "NO" << endl;
            continue;
        }

        // create two vectors for a and b
        // recursively call each scenario, if we get to base case and match a and b
        vector<int> aTurns(n);
        vector<int> bTurns(n);

        // cases:
        // 
    }
    
    return 0;
}