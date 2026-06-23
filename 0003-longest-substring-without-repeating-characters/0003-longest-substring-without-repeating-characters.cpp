class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int mlen = 0;
        int i = 0; vector<int> hash(256, -1);
        for(int j = 0; j<n; j++){
            if(hash[s[j]] != -1){
                if(hash[s[j]] >= i){
                    i = hash[s[j]]+1;
                }
            }
            mlen = max(mlen, j-i+1);
            hash[s[j]] = j;
        }
        return mlen;
    }
};