// The API isBadVersion is defined for you.
// bool isBadVersion(l version);

class Solution {
public:
    long long firstBadVersion(long long n) {
        int left=1;
        int right=n;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(isBadVersion(mid)){
                right=mid-1;
            }
            else{
                left=mid+1;    
            }
        }
        return left;

        
    }
};
