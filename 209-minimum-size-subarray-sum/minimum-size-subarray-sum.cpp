class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n = nums.size();
        int left = 0;
        int minLen = INT_MAX;

        vector<int> prefix(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];  // ✅ proper prefix sum calculation
        }

        for(int right=0;right<n;right++)
        {
            while(left<=right)
            {
                 int currSum = prefix[right] - (left > 0 ? prefix[left - 1] : 0);

                if(currSum>=target)
                {
                    minLen=min(minLen,right-left+1);
                    left++;
                }
                else
                {
                    break;
                }
  

            }
        }

   return minLen == INT_MAX ? 0 : minLen;
    }
};