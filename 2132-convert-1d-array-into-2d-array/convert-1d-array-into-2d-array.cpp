class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> answer;
        if(m*n!=original.size()){
           return answer;
        }
        int k=0;
        for(int i =0;i<m;i++){
            vector<int> answer1;
            for(int j=0;j<n;j++){
              answer1.push_back(original[k]);
              k++;
            }
            answer.push_back(answer1);
        }
        return answer;
        
        
    }
};