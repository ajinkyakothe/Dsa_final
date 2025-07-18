class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long currSum = 0;
        int l = 0, result = 0;

        for (int r = 0; r < n; r++) {
            currSum += nums[r];

            // Check if we can make all elements in window equal to nums[r]
            while ((long)nums[r] * (r - l + 1) - currSum > k) {
                currSum -= nums[l];
                l++;
            }

            result = max(result, r - l + 1);
        }

        return result;
    }
};
