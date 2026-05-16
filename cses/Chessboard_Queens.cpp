#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_placement_conflicted(
    const std::vector<std::pair<int, int>>& occupied_cells, 
    int r_check, 
    int c_check
) {
    // Optimization: Pre-calculate the diagonal values for the target cell
    const int main_diag_diff = r_check - c_check; 
    const int anti_diag_sum = r_check + c_check;   

    return std::any_of(occupied_cells.begin(), occupied_cells.end(), 
        [r_check, c_check, main_diag_diff, anti_diag_sum]
        (const std::pair<int, int>& p) {
            
            int r_pair = p.first;
            int c_pair = p.second;
            
            // Row or Column Conflict
            bool is_straight_conflict = (r_pair == r_check) || (c_pair == c_check);

            // Diagonal Conflict
            bool is_diag_conflict = (r_pair - c_pair == main_diag_diff) || 
                                    (r_pair + c_pair == anti_diag_sum);

            return is_straight_conflict || is_diag_conflict;
        }
    );
}

int dfs(vector<vector<char>> board, vector<pair<int, int>> pieces, int r, int c){
    // r and c are current row and column for space it's checking
    // pieces holds row and column for piences placed on board
    // board is just the board, doesn't change
    if (board[r][c] == '*'){
        return 0;
    }
    if (is_placement_conflicted(pieces, r, c)){
        return 0;
    }
    pieces.push_back({r, c});
    return 1 + dfs(board, pieces, r + 2, c + 1) + dfs(board, pieces, r + 2, c - 1) + dfs(board, pieces, r - 2, c + 1) + dfs(board, pieces, r - 2, c - 1)
             + dfs(board, pieces, r + 1, c + 2) + dfs(board, pieces, r + 1, c - 2) + dfs(board, pieces, r - 1, c + 2) + dfs(board, pieces, r - 1, c - 2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<char>> board(8);
    for (int i = 0; i < 8; i ++){
        for (int j = 0; j < 8; j ++){
            char square;
            cin >> square;
            board[i].push_back(square);
        }
    }
    
    // so now we have the board stored as a 2d array of chars
    // we need to find how many squares that are equal to '.'
    // we can put a queen on wihtout it attacking another queen
    // seems like a recursive problem
    // we run a dfs from each open square as a starting point
    // each step, you go either 2 vert and 1 horiz, or 2 horiz and 1 vert
    // since that's the closest non attacking square
    // then repeat that from all those squares keeping track of how many we have on the board total and where
    int total = 0;
    vector<pair<int, int>> pieces;
    for (int i = 0; i < 8; i ++){
        for (int j = 0; j < 8; j ++){
            pieces.push_back({i, j});
            total = max(total, dfs(board, pieces, i, j));
            pieces.clear();
        }
    }

    cout << total << endl;
    return 0;
}