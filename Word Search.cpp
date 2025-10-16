class Solution {
public:
    bool recurse(vector<vector<char>>& board, int iteratorX, int iteratorY, string word){
        if(iteratorX < 0 || iteratorX >= board.size())
            return false;
        else if(iteratorY < 0 || iteratorY >= board[0].size())
            return false;
        else if(word.size() == 1 && board[iteratorX][iteratorY] == word[0])
            return true;
        else if(board[iteratorX][iteratorY] != word[0])
            return false;
        
        char currValue = board[iteratorX][iteratorY];
        board[iteratorX][iteratorY] = '*';
        bool result = 
            recurse(board, iteratorX+1, iteratorY, word.substr(1)) ||
            recurse(board, iteratorX, iteratorY+1, word.substr(1)) ||
            recurse(board, iteratorX-1, iteratorY, word.substr(1)) ||
            recurse(board, iteratorX, iteratorY-1, word.substr(1));
        board[iteratorX][iteratorY] = currValue;
        return result;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[0].size(); j++){
                if(board[i][j] == word[0]){
                    bool result = recurse(board, i, j, word);
                    if(result) return true;
                }
            }
        }
        return false;
    }
};