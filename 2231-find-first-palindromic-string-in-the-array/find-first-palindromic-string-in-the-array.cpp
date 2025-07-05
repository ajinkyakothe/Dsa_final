class Solution {
public:

   bool checkPalin(string temp)
   {
    int l=0,r=temp.size()-1;

    while(l<r)
    {
        if(temp[l]!=temp[r])
        {
            return false;
        }
        l++;
        r--;
    }

   return true;

   }
 

    string firstPalindrome(vector<string>& words) {

     string res="";

     for(int i=0;i<words.size();i++)
     {
        string temp=words[i];
        bool flag=checkPalin(temp);
        if(flag)
        {   
            res=temp;
            break;
        }
     }
  
      return res;
           
    }
};