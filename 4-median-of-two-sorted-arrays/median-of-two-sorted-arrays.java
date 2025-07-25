class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
   
     int n=nums1.length;
     int m=nums2.length;
     int len=n+m;

     int i=0,j=0,k=0;
     int res[]=new int[len];

     while(i<n && j<m)
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
   
     //if anything is remaining in nums1
     while(i<n)
     {
        res[k++]=nums1[i++]; 
     }
   
     //if anything is in nums2 array
    while(j<m)
    {
      res[k++]=nums2[j++];
    }
    
    if(len%2==0)
    {
        return (res[(len/2)-1]+res[len/2])/2.0;
    }

    return res[len/2];
     
      

    }
}