class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto i : details){
            int age=0;
            for(int j=11;j<=12;j++){
                age = age*10 + (i[j]-'0');
            }
            
            if(age>60){
                count++;
            }
        }
        return count;
    }
};