class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white_counts=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') white_counts++;
        }
        int ans=white_counts;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i-k]=='W') white_counts--;
            if(blocks[i]=='W') white_counts++;
            ans=min(ans,white_counts);
        }
        return ans;


    }
};