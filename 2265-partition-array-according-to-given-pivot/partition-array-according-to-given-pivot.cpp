class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
         vector<int> res;
        
        // for smaller elements
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                res.push_back(nums[i]);
            }
        }    

        // for the equal elements
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==pivot)
            {
                res.push_back(nums[i]);
            }
        }    

        //for the greater elements
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
            {
                res.push_back(nums[i]);
            }
        }    

 return res;
 

    }
};