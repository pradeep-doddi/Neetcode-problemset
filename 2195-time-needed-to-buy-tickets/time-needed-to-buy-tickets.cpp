class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int i=0;
        while(tickets[k] != 0){
            i = i%tickets.size();
            if(tickets[i]>0){
                tickets[i] -= 1;    
                ans+=1;
            }
            i++;
            
            
        }
        return ans;
    }
};