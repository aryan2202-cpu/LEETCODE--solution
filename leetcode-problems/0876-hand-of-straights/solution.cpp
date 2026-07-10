class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        int n = hand.size();
        map<int,int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[hand[i]]++;
    }
        for (int i = 0; i < n; i++) {
            int card = hand[i];
            if (mpp[card] == 0) continue;  
            for (int x = card; x < card + groupSize; x++) {
                if (mpp[x] == 0) return false;  
                mpp[x]--;
            }
        }
        return true;
    }
};
