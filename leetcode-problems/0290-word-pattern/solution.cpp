class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                words.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }
        words.push_back(word); 
        if(pattern.size() != words.size()) return false;
        map<char,string> mpp;
        for(int i = 0; i < pattern.size(); i++){
            char c = pattern[i];
            if(mpp.count(c)){
                if(mpp[c] != words[i]) return false;
            } else {
                for(auto it : mpp){
                    if(it.second == words[i]) return false;
                }
                mpp[c] = words[i];
            }
        }
        return true;
    }
};
