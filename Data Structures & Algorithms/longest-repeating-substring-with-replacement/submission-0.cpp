class Solution {
   public:
    int characterReplacement(string s, int k) {
        vector<int> hash(26);
        int l=0,maxFreq=0,maxLen = 0;
        for(int r=0;r < s.size(); r++) {
            hash[s[r] -'A']++;
            maxFreq=max(maxFreq,hash[s[r]-'A']);

            while (r - l + 1 - maxFreq > k)
            hash[s[l++] -'A']--;
            maxLen = max(maxLen, r - l + 1);
        }
 return maxLen;
    }
};