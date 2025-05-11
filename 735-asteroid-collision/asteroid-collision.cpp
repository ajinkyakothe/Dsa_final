class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         vector<int> ans;

         for(auto asteroid:asteroids)
         {
            if(asteroid>0)
            {
                ans.push_back(asteroid);
            }
            else
            {
               while(ans.size() && ans.back()>0 && abs(asteroid)>ans.back()) ans.pop_back(); 

               if(ans.size()==0 || ans.back()<0)
               {
                ans.push_back(asteroid);
               } 

               else if(ans.size()>0 && abs(asteroid)==ans.back())
               {
                ans.pop_back();
               }
            }

         }
         return ans;
    }
};