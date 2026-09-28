class Solution {
public:
    bool canrepair(vector<int>& ranks,long long mid,int cars){
        long long comp=0;
        for(auto x : ranks){
            comp += sqrt((long double)mid/x);
            if(comp>=cars){
                return true;
            }
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=1;
        long long high = 1LL * (*min_element(ranks.begin(), ranks.end())) * cars * cars;
        while(low<high){
            long long mid=low+(high-low)/2;
            if(canrepair(ranks,mid,cars)){
                high=mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};