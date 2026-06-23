class Solution {
private:
    void settingzero(vector<vector<int>> &matrix,int row,int col){
        for(int i = 0;i<matrix.size();i++){
            matrix[i][col] = 0;
        }
        for(int j=0;j<matrix[0].size();j++){
            matrix[row][j] = 0;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> data;
        
        for(int i =0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    data.push_back({i,j});
                }
            }
        }
        for(int i=0;i<data.size();i++){
            settingzero(matrix,data[i].first,data[i].second);
        }
    }
};
