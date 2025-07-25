class Solution {
    public String longestCommonPrefix(String[] str) {

      //pahile bawa sort kar na    
       Arrays.sort(str);
    
     //ata first ani last chi string ghe ani 
     String first=str[0];
     String last=str[str.length-1];

     //ata ek min length kada
       int minLen=Math.min(first.length(),last.length());

       int i=0;
       while(i<minLen && first.charAt(i)==last.charAt(i))
       {
        i++;
       }

     String res=first.substring(0,i);
     return res;
              
    }
}