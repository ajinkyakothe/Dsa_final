class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
         int n = position.size();
        vector<pair<int, double>> cars;

         //pair position and time to reach the target
         for(int i=0;i<n;i++)
         {
            double time=(double)(target-position[i])/speed[i]; 
            cars.push_back({position[i], time});
         }

         //sort cars based on positon in decreasing order
           sort(cars.rbegin(), cars.rend());

       // Step 3: Process with stack logic
        stack<double> st; 

        for(auto& car:cars)  
        {
            double time=car.second;
            //if car is taking the longer time it's a new fleet
            if(st.empty() || time>st.top())
            {
                st.push(time);
            }
            // Else, it merges with the fleet ahead (no need to push)
        }
         return st.size();   
    }
};