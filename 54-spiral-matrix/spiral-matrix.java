class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        
        int n=matrix.length;
        int m=matrix[0].length;

        int top=0, bottom=n-1;
        int left=0 , right=m-1; 
          
        List<Integer> result = new ArrayList<>();  
           
        while(left <= right && top<=bottom)
        {
            //traverse the top
            for(int i=left;i<=right;i++)
            {
                result.add(matrix[top][i]);
            }
            top++;

            //tarverse right column
            for(int i=top;i<=bottom;i++)
            {
                result.add(matrix[i][right]);
            }
            right--;

            //traverse the row
            if(top <= bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }
            //tarverse left column
            if(left <= right){
                for(int i=bottom;i>=top;i--)
                {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }    
             
     return result;             
               
    }
}