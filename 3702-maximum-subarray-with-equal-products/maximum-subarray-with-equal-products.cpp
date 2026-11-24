class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxLength = 0;
        for (int i = 0; i < nums.size(); i++) {
            long long product = 1;
            long long currentGcd = nums[i];
            long long currentLcm = nums[i];
            
            for (int j = i; j < nums.size(); j++) {
                product *= nums[j];
                if (product > 25200) break;
                
                currentGcd = gcd(currentGcd, (long long)nums[j]);
                currentLcm = lcm(currentLcm, (long long)nums[j]);
                
                if (product == currentGcd * currentLcm) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }
        return maxLength;
    }
};
