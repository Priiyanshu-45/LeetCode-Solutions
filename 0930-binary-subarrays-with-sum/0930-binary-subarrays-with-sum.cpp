class Solution {
public:
    // int n = nums.size();
    //         int cnt = 0;
    //         for(int i = 0; i<n; i++){
    //             int sum = 0;
    //             for(int j = i; j<n; j++){
    //                 sum += nums[j];
    //                 if(sum == goal) cnt++;
    //                 else if (sum > goal) break;
    //             }
    //         }
    //         return cnt;
    
    int atMost(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int n = nums.size();
        int cnt = 0;
        int i = 0; 
        int sum = 0;
        for(int j = 0; j<n; j++){
            sum += nums[j];
            while(sum > goal){
                sum -= nums[i];
                i++;
            }
            cnt += j-i+1;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
};