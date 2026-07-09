class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();
        for(int i = 0; i<n; i++){
            bool fnd = false;
            for(int j = i+1; j<n; j++){
                if(prices[j] <= prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    fnd = true;
                    break;
                }
            }
            if(!fnd) ans.push_back(prices[i]);
        }
        return ans;
    }
};