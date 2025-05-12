class StockSpanner {
public:
   vector<int>record;
 
    StockSpanner() {
        
    }
    
    int next(int price) {
        record.push_back(price);
        int cnt = 1;
        for (int i = record.size() - 2; i >= 0; i--) { // start from last-1
            if (record[i] <= price) {
                cnt++;
            } else {
                break; // stop when you find greater
            }
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */