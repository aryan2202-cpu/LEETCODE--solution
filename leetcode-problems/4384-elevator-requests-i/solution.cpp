class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
     // total floors for case1 = 4
        int sum = 0;
        for(int i = 1;i<requests.size();i++){
            sum = sum + abs(requests[i]-requests[i-1]);
        }
        return sum+requests[0];
    }
};
