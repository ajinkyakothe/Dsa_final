class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       
    //approach in my head
    //don poineter thevu ani 

   sort(g.begin(), g.end()); // sort greed factor
    sort(s.begin(), s.end()); // sort cookie sizes

    int res=0; 
    int left=0,right=0;

    while(left<g.size() && right<s.size())
    { 
         if(g[left]<=s[right])
         {
           left++;
         }
         right++;
        
    }    
   
   return left;

    }
};