class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        int maxLen = 0;

        set<char> window;

        for(int right = 0;right < s.size();right++){

            while(window.count(s[right])){

                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            maxLen = max(maxLen,right - left + 1);
        }
        return maxLen;
        



        
    }
};
