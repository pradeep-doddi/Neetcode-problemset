class Solution {
public:
    int maxDifference(string s) {
        map<char, int> mp;

        // count frequency
        for (char c : s) {
            mp[c]++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;

        for (auto it : mp) {
            int freq = it.second;

            if (freq % 2 == 1) {          // odd
                maxOdd = max(maxOdd, freq);
            } else {                      // even
                minEven = min(minEven, freq);
            }
        }

        return maxOdd - minEven;
    }
};
