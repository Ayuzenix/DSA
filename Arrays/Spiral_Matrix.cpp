class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>result;
        int srow=0;
        int erow=m-1;
        int scol=0;
        int ecol=n-1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                result.push_back(matrix[srow][i]);
            }
            srow++;
            for(int i=srow;i<=erow;i++){
                result.push_back(matrix[i][ecol]);
            }
            ecol--;
            if(srow<=erow){
            for(int i=ecol;i>=scol;i--){
                result.push_back(matrix[erow][i]);
            }
            erow--;
            }
            
            if(scol<=ecol){
                for(int i=erow;i>=srow;i--){
                    result.push_back(matrix[i][scol]);
                }
            scol++;
            }
            
        }
        return result;
    }
};
