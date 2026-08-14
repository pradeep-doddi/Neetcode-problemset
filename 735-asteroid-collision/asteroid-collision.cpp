class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        for(auto i : asteroids){
            bool eq=false;
            while(!ans.empty() && (ans.back()>0 && i < 0 )){
                if(abs(ans.back()<abs(i))){
                    ans.pop_back();
                }
                else if(abs(ans.back())==abs(i)){
                    ans.pop_back();
                    eq=true;
                    break;
                }
                else{
                    eq=true;
                    break;
                }
            }
            if(!eq){
                ans.push_back(i);
            }
        }
        return ans;
    }
};