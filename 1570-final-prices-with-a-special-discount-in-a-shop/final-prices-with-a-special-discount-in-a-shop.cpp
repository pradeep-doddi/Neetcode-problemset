class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>arr(prices.size(),-1);
        stack<int>st;
        for(int i=prices.size()-1;i>=0;i--){
            while(!st.empty() && prices[st.top()]>prices[i]){
                st.pop();
            }
            if(!st.empty()){
                int topprice=st.top();
                arr[i] = prices[i]-prices[topprice];
            }
            st.push(i);
        }
        for(int i=0;i<prices.size();i++){
            if(arr[i]==-1){
                arr[i]=prices[i];
            }
        }
        return arr;
    }
};