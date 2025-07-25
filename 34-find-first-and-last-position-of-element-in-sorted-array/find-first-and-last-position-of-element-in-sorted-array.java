class Solution {
    public int[] searchRange(int[] nums, int target) {
        
         int ans[]={-1,-1};

          //for the first occurence
         ans[0]=binarySearch(nums,target,true);

         //for the last occurence
         ans[1]=binarySearch(nums,target,false);

         return ans;
          
    }
     static int binarySearch(int[] nums, int target, boolean findFirst) {
       int s=0,e=nums.length-1;
       int ans=-1;

       while(s<=e)
       {
        int mid=s+(e-s)/2;
    
       if(target>nums[mid])
       {
        s=mid+1;
       }
       else if(target<nums[mid])
      {
        e=mid-1;
      } 
      else
      {
        ans=mid;
        //for the first shrink window to left
        if(findFirst)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
      }

       }

    return ans;

     }
}