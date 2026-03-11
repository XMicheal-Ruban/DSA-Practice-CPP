class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(dfs(board, 0, word, i, j)) return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, int idx, string word, int i , int j){
        if(idx == word.length()) return true;
         if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[idx]){
            return false;
         }
         char temp = board[i][j];
         board[i][j] = '#';
         bool found = dfs(board, idx+1, word, i, j+1) || dfs(board, idx+1, word, i, j-1) || dfs(board, idx+1, word, i+1, j) || dfs(board, idx+1, word, i-1, j);
         board[i][j] = temp;
         return found;
    }
};