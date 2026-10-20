class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int nondup = 0;
       for(int i = 1; i<nums.size(); i++){
        if(nums[i] != nums[nondup]){
            swap(nums[i], nums[++nondup]);
        }
       }
       return nondup+1; 
    }
};