class Solution {
public:

    void revserr(string  &temp)
    {
        int l=0,r=temp.size()-1;
        while(l<r)
        {
            char c=temp[l];
            temp[l]=temp[r];
            temp[r]=c;
            l++;
            r--;
        }
    }

    string reverseWords(string s) {
        string res="";
        string temp="";
      for(char c:s)
      { 
       
        if(c==' ')
        {
           revserr(temp);       // उलट कर
            res += temp + " ";   // output मध्ये टाक
            temp = "";
        }
        else
        {
            temp += c;           
        }
      }

        revserr(temp);
        res=res+temp;
       return res;

    }
};