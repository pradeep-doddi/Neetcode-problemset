class Solution {
public:
    int minOperations(string s) {
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++){
            char exp0=(i%2==0)?'0':'1';
            char exp1=(i%2==0)?'1':'0';
            if(exp0 != s[i]) count0++;
            if(exp1 != s[i]) count1++;
        }
        return min(count0,count1);
    }
};