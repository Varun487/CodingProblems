class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sliding window -> Time:O(n), Space:O(n)
        set<char> charSet;
        int l = 0, ans = 0;
        for (int r = 0; r < s.size(); r++) {
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
