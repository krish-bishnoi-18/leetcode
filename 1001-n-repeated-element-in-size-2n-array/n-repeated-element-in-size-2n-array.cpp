class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int answer;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return answer;
    }
};