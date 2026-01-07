class Solution {
    public int singleNonDuplicate(int[] nums) {
        int l = 0, h = nums.length - 1;

        while (l < h) {
            int m = l + (h - l) / 2;

            // Ensure m is even
            if (m % 2 == 1) {
                m--;
            }

            if (nums[m] == nums[m + 1]) {
                l = m + 2;   // single element is on right
            } else {
                h = m;       // single element is on left or at m
            }
        }

        return nums[l];
    }
}
