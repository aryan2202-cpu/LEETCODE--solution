class Solution{
    public:
vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    vector<string> answer(n);
    vector<bool> used(n, false);

    for (int rank = 1; rank <= n; rank++) {
        int max = -1, maxIdx = -1;
        for (int i = 0; i < n; i++) {
            if (!used[i] && score[i] > max) {
                max = score[i];
                maxIdx = i;
            }
        }
        used[maxIdx] = true;
        if (rank == 1) answer[maxIdx] = "Gold Medal";
        else if (rank == 2) answer[maxIdx] = "Silver Medal";
        else if (rank == 3) answer[maxIdx] = "Bronze Medal";
        else answer[maxIdx] = to_string(rank);
    }
    return answer;
}
};
