class Solution {
public:
    int countVowelSubstrings(string word) {
        int count = 0;
        int n = word.size();
        string vowels = "aeiou";
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                string st = word.substr(i,j-i+1);
                bool onlyVowels = true;
            for (char c : st) {
                if (vowels.find(c) == string::npos) {
                    onlyVowels = false;
                    break;
                }
            }              
                if(onlyVowels && st.contains('a') && st.contains('e') && st.contains('i') && st.contains('o') && st.contains('u')){
                    count ++;
                }
            }
        }
        return count;
    }
};
