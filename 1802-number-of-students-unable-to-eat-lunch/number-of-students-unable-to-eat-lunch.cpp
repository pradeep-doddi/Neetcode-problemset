class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stu;
        for(auto i : students){
            stu.push(i);
        }
        stack<int>snd;
        for(int i=sandwiches.size()-1;i>=0;i--){
            snd.push(sandwiches[i]);
        }
        int rotations= 0;
        while(rotations != stu.size()){
            if(stu.front()==snd.top()){
                stu.pop();
                snd.pop();
                rotations =0;
            }
            else{
                int x=stu.front();
                stu.pop();
                stu.push(x);
                rotations += 1;
            }
        }
        return stu.size();
    }
};