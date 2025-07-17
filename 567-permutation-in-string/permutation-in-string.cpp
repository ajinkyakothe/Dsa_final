class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      if(s1.length() > s2.length())
      {
        return false;
      }  
      
      unordered_map<char,int>s1Count; //count storage for the first string
      unordered_map<char,int>s2Count; //count strogae for the second string

     for(int i=0;i<s1.length();i++)  //to increase the value for the each of the variable
     {
        s1Count[s1[i]]++;
        s2Count[s2[i]]++;
     }     
       
     if(s1Count==s2Count)  //to reduce the computation of the code check here only
     {
        return true;
     }
     int left=0;
     
     for(int right=s1.length();right<s2.length();right++) //to make the skeleton of the two pointer
     {
        s2Count[s2[right]]++;
        s2Count[s2[left]]--;

        if(s2Count[s2[left]]==0)  // if the frequency of the variable is zero then erase it from the map
        {
            s2Count.erase(s2[left]);
        }
        left++; //increse the pointer

        if(s1Count==s2Count) return true;

     }
    return false;

    }
};