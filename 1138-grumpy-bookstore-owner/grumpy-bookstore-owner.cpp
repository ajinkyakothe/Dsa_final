class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
           
          int n=customers.size();

          int maxUnSatCust=0,currUnnsat=0;

          for(int i=0;i<minutes;i++)  //processing for the first window
          {
            currUnnsat += customers[i]*grumpy[i];
          } 
         
          maxUnSatCust=currUnnsat; //currcust is for the updation and maxCust is for the customer
         
          int i=0;
          int j=minutes;

        while(j<n)
        {
            currUnnsat += customers[j]*grumpy[j];
            currUnnsat -= customers[i]*grumpy[i];

            maxUnSatCust=max(maxUnSatCust,currUnnsat);
            i++;
            j++;

        }
        
       int totalCust=maxUnSatCust; //calculated using power

       //for O(n)
 
       for(int i=0;i<n;i++)
       {
        totalCust += customers[i] * (1-grumpy[i]); 
       }


     return totalCust;

           
    }
};