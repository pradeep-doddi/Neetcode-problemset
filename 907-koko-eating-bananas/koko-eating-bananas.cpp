class Solution {
public:
    bool cancomplete(vector<int>&piles,int mid,int h){
        long long hours =0;
        for(auto i : piles){
            hours += (i+mid-1)/mid;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right = *max_element(piles.begin(),piles.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(cancomplete(piles,mid,h)){
                right = mid;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};