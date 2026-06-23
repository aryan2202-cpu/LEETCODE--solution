class Solution {
public:
    string toLowerCase(string s) {
      char c;
       for(char &c : s){
        if(c>='A' && c<='Z'){
            c |=32;
        }
      
       }
    return s;
    }
};
