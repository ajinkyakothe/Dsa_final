class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

   // Step 1: Apply doubling & zero rule
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }

    // Step 2: Shift non-zeros forward
    vector<int> res;
    for (int num : nums) {
        if (num != 0) res.push_back(num);
    }

    // Fill remaining with zeros
    while (res.size() < nums.size()) {
        res.push_back(0);
    }

    return res;
 
              
    }
};