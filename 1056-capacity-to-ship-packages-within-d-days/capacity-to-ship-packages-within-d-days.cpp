class Solution {
public:
    bool canship(vector<int>&weights,int mid,int days){
        int daysneeded=1;
        int currweight=0;
        for(auto w : weights){
            if(currweight+w<=mid){
                currweight+=w;
            }
            else{
                daysneeded +=1;
                currweight=w;
            }
        }
        return (daysneeded<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
            if(canship(weights,mid,days)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};