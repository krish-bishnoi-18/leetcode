class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mpp;
        int answer=-1;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxfre=0;
        for(auto it:mpp){
            if(it.first%2==0){
                if(it.second>maxfre){
                    maxfre = it.second;
                    answer=it.first;
                }
            }
        }
        return answer;
    }
};