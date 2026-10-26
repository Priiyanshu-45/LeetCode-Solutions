    class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int sm = prices[0];
            int gmax = 0;
            for(int i = 1; i<n; i++){
            if(sm>prices[i]) sm = prices[i];
            gmax = max(gmax, prices[i] - sm); 
            }
            return gmax;
        }
    };