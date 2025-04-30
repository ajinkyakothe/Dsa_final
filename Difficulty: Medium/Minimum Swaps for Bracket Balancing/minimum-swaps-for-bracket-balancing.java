//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.minimumNumberOfSwaps(S));

            System.out.println("~");
        }
    }
}

// } Driver Code Ends


// User function Template for Java
class Solution {
    static int minimumNumberOfSwaps(String s) {
        
        int open =0;
        int close =0;
        int swaps =0;
        int ub = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='[')
            {
                open++;
                if(ub>0)
                {
                    swaps+=ub;
                    ub--;
                }
            }
            else
            {
                close++;
                ub=close-open;
            }
        }
        
        return swaps;
        
        
        
    }
}