class Solution {
public:
    int thirdMax(vector<int>& nums) { 
        set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        vector<int> answer;
        for(auto it:st){
            answer.push_back(it);
        }
        if(answer.size()==2){
             return answer[1];
        }
        else if (answer.size()==1){
            return answer[0];
        }
        return answer[answer.size()-3];
    }
};