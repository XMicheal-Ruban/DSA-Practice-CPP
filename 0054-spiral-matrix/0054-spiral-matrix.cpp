class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int x  = 0, y = 0, dx = 1, dy = 0;
        vector<int> res;
        for(int i = 0; i < rows * col; i++){
            res.push_back(matrix[y][x]);
            matrix[y][x] = -101;
            if(!(0<= x + dx && x+dx < col && y+dy >= 0  && y + dy < rows) || matrix[y+dy][x+dx] == -101){
                int temp = dx;
                dx = -dy;
                dy = temp;
            }
            x+= dx;
            y+= dy;
        }
        return res;
    }
};