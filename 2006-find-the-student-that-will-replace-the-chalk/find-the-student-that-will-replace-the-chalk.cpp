class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long total_sum = 0;
        for (int c : chalk) {
            total_sum+=c;
        }
        k %= total_sum;
        int i = 0;
        while(k>=chalk[i]){
            k = k - chalk[i];
            i++;
            if(i > n-1) i = 0;
        }
        return i;
    }
};