class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {

        double waitingtime = 0;
        long long currenttime = 0;

        for (auto &customer : customers) {

            int arrival = customer[0];
            int cook = customer[1];
            currenttime = max(currenttime, (long long)arrival);

            currenttime += cook;
            waitingtime += (currenttime - arrival);
        }

        return waitingtime / customers.size();
    }
};