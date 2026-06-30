class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int len = 0;
        int i = 0; int cnt0 = 0;
        for(int j = 0; j<n; j++){
            if(nums[j] == 0) cnt0++;
            if(cnt0 > k){
                if(nums[i] == 0) cnt0--;
                i++;
            }
            len = max(len, j-i+1);
        }
        return len;
    }
};