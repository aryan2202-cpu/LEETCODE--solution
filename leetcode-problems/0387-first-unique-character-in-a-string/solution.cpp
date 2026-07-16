class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int k=-1;
        for(int i = 0;i<n;i++){
             int count = 0;
        for(int j = 0;j<n;j++){
            if(i!=j && s[i]==s[j]){
            count++;
            break;
            }
        }
        if(count == 0) {
        k = i;
        break;
        }
        }
        return k;
    }
};


