class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int mlen = 0;
        int i = 0;
        vector<int> hash(26);
        int mf = 0;
        for (int j = i; j < n; j++) {
            hash[s[j] - 'A']++;
            mf = max(mf, hash[s[j] - 'A']);
            if (j - i + 1 - mf > k){
                hash[s[i]-'A']--;
                i++;
            }
            mlen = max(mlen, j - i + 1);
        }
        return mlen;
    }
};