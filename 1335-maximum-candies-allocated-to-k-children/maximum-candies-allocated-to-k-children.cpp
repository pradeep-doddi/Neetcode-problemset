class Solution {
public:
    bool splitcandies(const vector<int>& candies, int mid, long long k) {
        if (mid == 0) return true;
        long long count = 0;
        for (int x : candies) {
            count += x / mid;
        }
        return count >= k;
    } 

    int maximumCandies(vector<int>& candies, long long k) {
        int left = 0;
        int right = *max_element(candies.begin(), candies.end());

        while (left < right) {
            int mid = left + (right - left + 1) / 2;
            if (splitcandies(candies, mid, k)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};