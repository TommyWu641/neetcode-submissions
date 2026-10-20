class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> boxs[9];

        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                char val = board[i][j];
                if(val == '.') continue;
                int box = (i/3)*3 + j/3;
                if(row[i].count(val)){
                    return false;
                }
                else{
                    row[i].insert(val);
                }
                if(col[j].count(val)){
                    return false;
                }
                else{
                    col[j].insert(val);
                }
                if(boxs[box].count(val)){
                    return false;
                }
                else{
                    boxs[box].insert(val);
                }

            }
        }
        return true;
    }
};
