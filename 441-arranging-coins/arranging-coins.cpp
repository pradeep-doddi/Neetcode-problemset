class Solution {
public:
    int arrangeCoins(int n) {
        int left=0;
        int right=n;
        int ans=0;
        while(left<=right){
            long long int mid=left+(right-left)/2;
            if((mid*(mid+1))/2>n){
                right=mid-1;
            }
            else{
                ans=mid;
                left=mid+1;
            }
        }
        return ans;
    }
};