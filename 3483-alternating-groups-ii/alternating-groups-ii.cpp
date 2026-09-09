class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans=0;
        int length=1;
        for(int i=1;i<colors.size()+k-1;i++){
            int curr=colors[i%colors.size()];
            int prev=colors[(i-1)%colors.size()];
            if(curr!=prev){
                length += 1;
            }
            else{
                length=1;
            }
            if(length>=k){
                ans++;
            }
        }
        return ans;
    }
};