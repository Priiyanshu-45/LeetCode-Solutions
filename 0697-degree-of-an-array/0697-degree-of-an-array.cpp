class Solution {
public:
    struct info {
        int count = 0;
        int first_seen = -1;
        int last_seen = -1;
        int diff = 0;
    };

    int findShortestSubArray(vector<int>& nums) {
        map<int, info> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mpp[nums[i]].count++;
            if (mpp[nums[i]].first_seen == -1) {
                mpp[nums[i]].first_seen = i;
            } else {
                mpp[nums[i]].last_seen = i;
                mpp[nums[i]].diff =
                    mpp[nums[i]].last_seen - mpp[nums[i]].first_seen;
            }
        }

        auto ans = max_element(mpp.begin(), mpp.end(),
                               [](const auto& a, const auto& b) {
                                   if (a.second.count != b.second.count) {
                                       return a.second.count < b.second.count;
                                   }
                                   return a.second.diff > b.second.diff;
                               });

        return ans->second.diff+1;
    }
};