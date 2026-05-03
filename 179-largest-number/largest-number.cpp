class Solution {
public:
    string largestNumber(vector<int>& nums) {
     vector<string>ans;
     string finalanswer="";
     for(auto i:nums){
        ans.push_back(to_string(i));
     }
    sort(ans.begin(), ans.end(), [](string a, string b){
            return a + b > b + a;
        });
    for(auto i:ans ){
        finalanswer += i;
    }
    if(finalanswer[0]=='0') return "0";
    return finalanswer;

    }
};