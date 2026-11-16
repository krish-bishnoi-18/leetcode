class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> answer;
        if(n%2==1){
            for(int i=-n/2;i<=n/2;i++){
                answer.push_back(i);
            }
        }
        else{
            for(int i=-n/2;i<=n/2;i++){
                if(i==0){
                    continue;
                }
                answer.push_back(i);
            }
        }
        return answer;
    }
};