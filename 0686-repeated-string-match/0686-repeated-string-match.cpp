class Solution {
public:
    void lpsfind(vector<int>&lps,string s){
      int  suffix=1,prefix=0;
      while(suffix<s.size()){
        if(s[prefix]==s[suffix]){
            lps[suffix]= prefix+1;
            suffix++;
            prefix++;
        }else if(prefix == 0){
            lps[suffix]= 0;
            suffix++;
        }else{
            prefix = lps[prefix-1];
        }
      }
    }

    int kmp_match(string haystack, string needle) {
       vector<int>lps(needle.size(),0);
       lpsfind(lps,needle);

       int first=0,second=0;
    
       while(second<needle.size() && first<haystack.size()){
           if(needle[second]==haystack[first]){
            second++;
            first++;
           }
           else if(second==0)
             first++;
           else
              second= lps[second-1];
           
       }
    
       if(second==needle.size()) return 1;
       return 0;
    }
    int repeatedStringMatch(string a, string b) {
        if(a==b)return 1;
        string temp = a;
        int repeat=1;
        while(temp.size()<b.size()){
            temp +=a;
            repeat++;
        }
        
        if(kmp_match(temp,b)==1) return repeat;
        
        if(kmp_match(temp+a,b)==1) return ++repeat;
        
        return -1;

    
    }
};