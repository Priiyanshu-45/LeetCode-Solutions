class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, bool> mpp;
        int i = 0;
        for(int j = 0; j<n; j++){
          if(j > 0) {
              if(j-i <= k){
                if(mpp[nums[j]]) return true;
                if(j-i == k){
                    mpp[nums[i]] = false;
                    i++;
                }
            }
          }
            mpp[nums[j]] = true;
        }
        return false;
    }
};