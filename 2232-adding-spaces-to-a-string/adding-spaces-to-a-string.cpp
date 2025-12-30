class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string new_string="";
        int i=0;
        int j=0;
        while(i<s.size() && j<spaces.size()){
            if(i==spaces[j]){
                new_string += ' ';
                j++;  
            }
            new_string += s[i];
            i++;
        }
        while(i<s.size()){
            new_string += s[i];
            i++;
        }
        return new_string;
    }
};