class Solution {
public:
    bool pathExists(vector<vector<int>>& board, int i, int j){
        return i >= 0 && j >= 0 && i < board.size() && j < board[0].size();
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int,int>> directions {{-1,0},{1,0},{0,1},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                int liveN = 0;
                for(int k = 0; k<8; k++){
                    int currRow = i + directions[k].first;
                    int currCol = j + directions[k].second;
                    if(pathExists(board, currRow, currCol) && board[currRow][currCol]%2 == 1) 
                        liveN++;
                }     

                if((liveN < 2 || liveN > 3) && board[i][j] == 1) board[i][j] += 2;
                if(liveN == 3 && board[i][j] == 0) board[i][j] += 2;
            }
        }

        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j] >= 2)
                    board[i][j] = !(board[i][j]%2);
            }
        }
    }
};