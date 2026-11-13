class Solution {
public:
    int sumbyd(vector<int> &arr,int a){
        int sum=0;
        for(int i =0;i<arr.size();i++){
            sum+=ceil((double)arr[i]/(double)a);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1,end=*max_element(nums.begin(), nums.end()),answer=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(sumbyd(nums,mid)<=threshold){
               answer=mid;
               end =mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return answer;
        return -1;
    }
};