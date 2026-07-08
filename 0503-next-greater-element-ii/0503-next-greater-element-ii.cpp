class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        nums.reserve(n*2);
        nums.insert(nums.end(), nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 0; i<n; i++){
            bool fnd = false;
            for(int j = i; j<2*n; j++){
                if(nums[i] < nums[j]){
                    ans.push_back(nums[j]);
                    fnd = true;
                    break;
                }
            }
            if(!fnd) ans.push_back(-1);
        }
        return ans;
    }
};