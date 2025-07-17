class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //simple approach is to make the substring of the string s and then it is like
        // to run the loop over the string vector and get the longest string length...
        // it is variable sliding window problem...

        int left=0;
        int maxLength=0;
        unordered_set<char>charSet;

        for(int right=0;right<s.length();right++)
        {
            while(charSet.find(s[right])!=charSet.end())
            {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
            maxLength=max(maxLength,right-left+1);
        }

       return maxLength;
    }
};