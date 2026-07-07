class Solution {
public:
    // int m = nums1.size();
    // int n = nums2.size();
    // vector<int> ans;
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (nums1[i] == nums2[j]) {
    //             bool found = false;
    //             for (int k = j + 1; k < n; k++) {
    //                 if (nums2[j] < nums2[k]) {
    //                     ans.push_back(nums2[k]);
    //                     found = true;
    //                     break;
    //                 }
    //             }
    //             if (!found)
    //                 ans.push_back(-1);
    //             break;
    //         }
    //     }
    // }
    // return ans;

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        stack<int> st;
        unordered_map<int, int> mpp;

        for (int i = n - 1; i > -1; i--) {
            while (!st.empty() && nums2[i] > st.top()) {
                st.pop();
            }
            if (!st.empty())
                mpp[nums2[i]] = st.top();
            else
                mpp[nums2[i]] = -1;
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (int i = 0; i < m; i++) {
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};