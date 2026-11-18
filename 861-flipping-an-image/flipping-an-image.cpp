class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> answer;
        for (int i = 0; i < image.size(); i++) {
            vector<int> ans;
            for (int j = image[i].size() - 1; j >= 0; j--) {
                if (image[i][j] == 1) {
                    ans.push_back(0);
                } else {
                    ans.push_back(1);
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};
