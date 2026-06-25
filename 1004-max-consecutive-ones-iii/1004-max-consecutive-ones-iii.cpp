class Solution {
public:
// int longestOnes(vector<int>& nums, int k) {
//         int n = nums.size();
//         int mlen = 0;
//         int i =0;
//         for(int j = 0; j<n; j++){
//             if(nums[j] == 0){
//                 k--;
//             }
//             while(k<0){
//                 if(nums[i] == 0)k++;
//                 i++;
//             }
//             mlen = max(mlen, j-i+1);
            
//         }
//         return mlen;
//     }
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int mlen = 0;
        int i = 0; int zeroes = 0; 
        for(int j = 0; j<n; j++){
            if(nums[j] == 0) zeroes++;
            if(zeroes > k){
                if(nums[i]==0) zeroes--;
                i++;
            }
            mlen = max(mlen, j-i+1);
        }
        return mlen;
    }
};