class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if (nums.size() <= 2) return nums.size();

    int i = 2;  // start from 3rd element

    for (int j = 2; j < nums.size(); j++) {
        // Compare with nums[i - 2], NOT nums[i - 1]
        if (nums[j] != nums[i - 2]) {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
    }
};