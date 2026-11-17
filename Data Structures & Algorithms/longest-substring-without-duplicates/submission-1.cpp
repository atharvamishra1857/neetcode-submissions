class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;

        int left = 0;
        int max_length = 0;
        for(int right = 0; right<s.length(); right++){

            char c = s[right];

            if(seen.count(c) && seen[c] >= left){
                left = seen[c] + 1;
            }

            seen[c] = right;

            max_length = max(max_length, right - left + 1);
        }

        return max_length;
    }
};
