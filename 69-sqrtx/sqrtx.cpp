class Solution {
public:
    int mySqrt(int x) {
      if(x==0){
            return 0;
        }
        long long  answer=1;
      long long start=1,end=x;
      while(start<=end){
        long long mid=(start+end)/2;
        if(mid*mid>x){
            end=mid-1;
        }
        else if(mid*mid<=x){
            start=mid+1;
            answer=mid;
        }
      }
      return answer;
    }
};