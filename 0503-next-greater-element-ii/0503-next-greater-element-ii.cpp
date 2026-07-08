class Solution {
public:
    // int n = nums.size();
    //         nums.reserve(n*2);
    //         nums.insert(nums.end(), nums.begin(), nums.end());
    //         vector<int> ans;
    //         for(int i = 0; i<n; i++){
    //             bool fnd = false;
    //             for(int j = i; j<2*n; j++){
    //                 if(nums[i] < nums[j]){
    //                     ans.push_back(nums[j]);
    //                     fnd = true;
    //                     break;
    //                 }
    //             }
    //             if(!fnd) ans.push_back(-1);
    //         }
    //         return ans;

    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 2*n-1; i>=0; i--){
            int ind = i%n;
            while(!st.empty() && nums[ind] >= st.top()){
                st.pop();
            }
            if(st.empty()){
                ans[ind] = -1;
            }
            else {
                ans[ind] = st.top();
            }
                st.push(nums[ind]);
        }
        
        return ans;
    }
};