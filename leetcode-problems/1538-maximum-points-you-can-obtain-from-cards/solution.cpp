class Solution {
public:
    long long leftSum(vector<int>& cardPoints,int k){
        long long Lsum = 0;
        for(int i =0;i<k;i++){
          Lsum = Lsum + cardPoints[i];
        }
        return Lsum;
    }
    long long rightSum(vector<int>& cardPoints,int n, int k){
        long long Rsum = 0;
        for(int i = n-1;i>=n-k;i--){
            Rsum = Rsum + cardPoints[i];
        }
        return Rsum;
    }
    int maxScore(vector<int>& cardPoints, int k) {
       int n = cardPoints.size();
       long long leftsum = leftSum(cardPoints, k);   
       long long rightsum = 0;
       long long best = leftsum;
       for(int x = k-1; x >= 0; x--){
           leftsum -= cardPoints[x];                  
           rightsum += cardPoints[n - (k - x)];        
           best = max(best, leftsum + rightsum);
       }
       return (int)best;
    }
};
