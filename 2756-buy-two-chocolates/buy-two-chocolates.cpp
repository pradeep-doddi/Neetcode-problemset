class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini1){
                mini2=mini1;
                mini1=prices[i];
            }
            else if(prices[i]<mini2){
                mini2=prices[i];
            }
        }
        if(mini1+mini2<=money){
            return money-(mini1+mini2);
        }
        else return money;
    }
};