class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool search=false;
        int rows=0,cols=0;
        int rowe=matrix.size()-1,cole=matrix[0].size()-1;
        while(rows<=rowe){
            int rowmid=(rows+rowe)/2;
            if(matrix[rowmid][0]>target){
                rowe=rowmid-1;
            }
            else if(matrix[rowmid][0]<=target && matrix[rowmid][cole]>=target){
                while(cols<=cole){
                   int colmid=(cols+cole)/2; 
                   if(matrix[rowmid][colmid]>target){
                         cole=colmid-1;
                   }
                   else if (matrix[rowmid][colmid]<target){
                        cols=colmid+1;
                   }
                   else{
                    return true;
                   }
                }
            }
            else{
                rows=rowmid+1;
            }
        }
         return search;
    }
};