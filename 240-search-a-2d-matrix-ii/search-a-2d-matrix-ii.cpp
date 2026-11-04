class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool find=false;
        for(int i =0;i<matrix.size();i++){
            int start=0,end=matrix[0].size()-1;
            while(start<=end){
                int mid=(start+end)/2;
               if(matrix[i][mid]>target){
                   end=mid-1;
               }
               else if (matrix[i][mid]<target){
                     start=mid+1;
               }
               else{
                return true;
               }
            }
        }
        return find;
    }
};