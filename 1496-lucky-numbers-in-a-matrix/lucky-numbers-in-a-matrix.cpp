class Solution {
public:
    // Helper function to check if 'b' is the maximum element in column 'a'
    bool checkcol(vector<vector<int>>& matrix, int a, int b){
        int maxi = INT_MIN;
        // Loop through all rows (matrix.size()) for the fixed column 'a'
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][a] > maxi){
                maxi = matrix[i][a];
            }
        }
        return maxi == b;
    }

    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> answer;
        
        // Loop through each row
        for(int i = 0; i < matrix.size(); i++){
            int min = INT_MAX;
            int index = 0;
            
            // Find the minimum element and its column index in the current row
            for(int j = 0; j < matrix[i].size(); j++){
                if(min > matrix[i][j]){
                    min = matrix[i][j];
                    index = j; // Track the column index
                }
            }
            if(checkcol(matrix, index, min) == true){
                answer.push_back(min);
            }
        }
        return answer;
    }
};
