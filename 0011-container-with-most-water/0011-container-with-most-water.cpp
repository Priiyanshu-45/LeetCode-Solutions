class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int marea = INT_MIN;
        while (l < r) {
            marea = max(marea, (min(height[l], height[r]) * (r - l)));
            if (height[l] > height[r]) {
                r--;
            } else
                l++;
        }
        return marea;
    }
};