class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st;
        for(int i =0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int> answer;
        for(int i =1;i<=nums.size();i++){
            if(st.find(i)==st.end()){
              answer.push_back(i);
            }
        }
        return answer;
    }
};