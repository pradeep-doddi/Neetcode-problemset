class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i] != 1){
                ans += customers[i];
            }
        }
        for(int i=0;i<minutes;i++){
            if(grumpy[i] != 0){
                maxi += customers[i];
            }
        }
        int ans1=maxi;
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i-minutes]==1){
                ans1 -= customers[i-minutes];
            }
            if(grumpy[i]==1){
                ans1 += customers[i];
            }
            maxi=max(maxi,ans1);
        }
        return ans+maxi;
    }
};