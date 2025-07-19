class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp; // fruit cha type-> number 
        int l = 0, res = 0;


         for(int r=0;r<fruits.size();r++)
         {
            mp[fruits[r]]++;  //fruit cha count store zala

            while(mp.size()>2)
            {
                mp[fruits[l]]--;

                if (mp[fruits[l]] == 0) {
                    mp.erase(fruits[l]);
                }
                l++; // shrink window from left
            }
             
        
            //update if the current window is valid

            res=max(res,r-l+1);

         }
     return res;

    }
};