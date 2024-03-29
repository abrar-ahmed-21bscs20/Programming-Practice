#include <vector>
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int tsum = (n * (n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return tsum - sum;
    }
};
