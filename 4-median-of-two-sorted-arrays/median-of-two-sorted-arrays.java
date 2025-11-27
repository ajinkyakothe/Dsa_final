class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
      int len=nums1.length+nums2.length;

     int res[]=new int[len];

      int i=0,j=0,k=0;
      while(i<nums1.length && j<nums2.length)
      {
        if(nums1[i]<nums2[j])
        {
            res[k++]=nums1[i++];
        }
        else
        {
            res[k++]=nums2[j++]; 
        }
      }
       
      while(i<nums1.length)
      {
          res[k++]=nums1[i++];
      }  
      while(j<nums2.length)
      {
          res[k++]=nums2[j++];
      }
  
      if(len%2==0)
      {
        return (res[len/2-1]+res[len/2])/2.0;
      }

     return res[len/2];
      
    }
}