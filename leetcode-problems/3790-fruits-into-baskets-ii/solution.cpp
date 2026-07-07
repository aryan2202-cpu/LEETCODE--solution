class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int m = fruits.size();
        int unplaced = 0;
        for(int i = 0; i<m;i++){
            bool placed = false;
            for(int j = 0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j]){ 
                   baskets.erase(baskets.begin()+j);
                   placed = true;
                   break;
                }
                }
                if(!placed) unplaced++;
        }
        return unplaced;
    }
};
