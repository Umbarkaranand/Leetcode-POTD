class Solution {
public:
    int numSubmat(vector<vector<int>>& matrix) {
        int m = matrix.size(),n = matrix[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==1)matrix[i][j]+=matrix[i][j-1];
            }
        }

        int count=0;
       for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            int minH = matrix[i][j];
            for(int k=i;k>=0 and matrix[k][j]>0;k--){
                minH = min(minH,matrix[k][j]);
                count+=minH;
            }
        }
       }
        return count;
    }
};
