class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>str;
        int count = 0 ;
        for(int i =0;i<s.size();i++){
            if(s[i]=='(')str.push(s[i]);
            else{
                if(str.empty())
                count++;
                else
                str.pop();
                }
            
        }
        return str.size()+count;
    }
};