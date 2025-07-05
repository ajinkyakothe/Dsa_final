class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      
        //step 1:  is to sort the array:
        sort(nums.begin(),nums.end());

        int  diff=INT_MAX;

        // bhai using the sliding window for the evualtion of the differnce in between
        
        for(int i=0;i<=nums.size()-k;++i)
        {
            int win_diff=nums[i+k-1]-nums[i];

           //the minimum result will be cal on the go
            diff=min(diff,win_diff);
        }

        //return the result;
        return diff;


 
        

    }
};