class Solution {
    public String removeKdigits(String num, int k) {
        
        Stack<Character> stack=new Stack<>();

        for(char digit: num.toCharArray())
        {
            while(!stack.isEmpty() && k>0 && stack.peek() > digit)
            {
                stack.pop();
                k--;
            }
            stack.push(digit);
        }  

        //remove remaianing k digits
        while(k > 0 && !stack.isEmpty())
        {
            stack.pop();
            k--;
        }

        //construct the resukting string from the stack
        StringBuilder sb=new StringBuilder();
        while(!stack.isEmpty())
        {
            sb.append(stack.pop());
        }
        sb.reverse();

        //remove leading zeros
        while(sb.length() > 0 && sb.charAt(0) == '0')
        {
            sb.deleteCharAt(0);
        }
    
        //handle the test case that might be empty
        return sb.length() > 0 ? sb.toString() : "0";
             
             
    }
}