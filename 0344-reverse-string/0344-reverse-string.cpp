class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<char>str;
       for(int i = 0 ;i<s.size();i++){
        str.push(s[i]);
       } 
       int i = 0 ;
       while(!str.empty()){
         s[i]= str.top();
         str.pop();
         i++;
       }

    }
};