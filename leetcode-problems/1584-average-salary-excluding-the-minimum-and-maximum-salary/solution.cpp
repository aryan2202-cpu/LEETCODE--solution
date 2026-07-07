class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int n = salary.size()-1;
        salary.erase(salary.begin()+0);
        salary.erase(salary.begin()+n);
           int i = 0 ;
           int m = salary.size();
           double sum = 0;
           while(i<m){
            sum = sum + salary[i];
            i++; 
           }
           return (sum/salary.size());
    }
};
