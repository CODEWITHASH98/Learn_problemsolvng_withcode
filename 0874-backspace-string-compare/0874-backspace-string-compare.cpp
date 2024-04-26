class Solution {
public:
    
     string build(string s){
           stack<char>ans;
           string result = "";
            for(char ch : s){
                if(ch != '#') ans.push(ch);
                else if(!ans.empty()) ans.pop();
                }
            while(!ans.empty()){
                result += ans.top();
                ans.pop();
            }

        return result;
    
     }

     bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};