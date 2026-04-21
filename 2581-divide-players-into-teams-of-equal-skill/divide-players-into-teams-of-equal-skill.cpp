class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int n = skill.size();
        int tsum = 0;

        for (int x : skill) {
            tsum += x;
        }

        int pairs = n / 2;

        if (tsum % pairs != 0) return -1;

        int reqsum = tsum / pairs;

        int i = 0, j = n - 1;
        long long finalans = 0;

        while (i < j) {
            if (skill[i] + skill[j] != reqsum) {
                return -1;
            }
            finalans += 1LL * skill[i] * skill[j];
            i++;
            j--;
        }

        return finalans;
    }
};