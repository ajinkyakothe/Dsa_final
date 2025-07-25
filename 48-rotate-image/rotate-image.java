class Solution {
    public void rotate(int[][] a) {
     
      int n=a.length;
      int m=a[0].length;

      for(int i=0;i<n;i++)
      {
        for(int j=i;j<m;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
      }

      for(int i=0;i<n;i++)
      {
        int s=0,e=n-1;
        while(s<=e)
        {
           int temp=a[i][s];
            a[i][s]=a[i][e];
            a[i][e]=temp;  
            s++;
            e--;
        }
      }


           
    }
}