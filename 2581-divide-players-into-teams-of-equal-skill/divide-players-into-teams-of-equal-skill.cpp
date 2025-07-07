class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
           
     sort(skill.begin(),skill.end());

     if(skill.size()==2) return 1LL*skill[0]*skill[1];

     long long res=0;

     int i=0,j=skill.size()-1;
     int target=skill[i]+skill[j];
 
     while(i<j)
     {
        if(skill[i]+skill[j]!=target)
        {
            return -1;
        }
        else
        {
           res += 1LL * skill[i] * skill[j];
        }
        i++;
        j--;
     }
    
   return res;

    }
};