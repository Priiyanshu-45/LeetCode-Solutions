class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = INT_MIN;
        int lowestTillNow = prices[0];
        for(int i = 0; i<n; i++){
            if(prices[i] < lowestTillNow){
                lowestTillNow = prices[i];
            }
            maxProfit = max(maxProfit, prices[i] - lowestTillNow);
        }
        return maxProfit;
    }
};