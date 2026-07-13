class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) return false;

        vector<int> s1Count(26, 0);
        vector<int> winCount(26, 0);

        for (char ch : s1) {
            s1Count[ch - 'a']++;
        }

        int winSize = s1.size();

        for (int right = 0; right < s2.size(); right++) {
            winCount[s2[right] - 'a']++;

            if (right >= winSize) {
                winCount[s2[right - winSize] - 'a']--;
            }

            if (right >= winSize - 1 && s1Count == winCount) {
                return true;
            }
        }

        return false;
    }
};