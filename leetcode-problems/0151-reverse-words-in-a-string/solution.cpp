class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> Revstr;
        
        for(int i = n - 1; i >= 0; i--){
            if (s[i] == ' ') {
                continue;
            }
            for(int j = i; j >= 0; j--){
                if(s[j] != ' ' && j != 0){
                    continue;
                }           
                int startK = j + 1;
                if (j == 0 && s[j] != ' ') {
                    startK = 0;
                }
                
                for(int k = startK; k <= i; k++){
                    Revstr.push_back(string(1, s[k]));
                }       
                
                    Revstr.push_back(" ");
                   
                i = j;
                break;
            }
        }
        string result = "";
        for(int idx = 0; idx < Revstr.size(); idx++){
            result += Revstr[idx];
        }
        if (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        
        return result;
    }
};

