class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
      int l=0,r=0;
      int cnt=0,sum=0;
      queue<int>q;
       q.push(arr[l]);
      while(r<arr.size())
      {
        sum+=arr[r];
         if(q.size()<=k )
         {
            q.push(arr[r]);
         }
         
        if (r - l + 1 == k) {
    int avg = sum / k;
    if (avg >= threshold) {
        cnt++;
    }
    sum -= arr[l];  // Remove the leftmost value *before* l++
    l++;
}
        q.pop();
        r++;
         
      } 
        
      return cnt;
    }
};