#include <vector>
#include <queue>
#include <unordered_set>

class Solution {
public:
    int nthSuperUglyNumber(int n, std::vector<int>& primes) {
        if (n == 1) return 1;
        std::priority_queue<long long, std::vector<long long>, std::greater<long long>> pq;
        std::unordered_set<long long> visited;
        pq.push(1);
        visited.insert(1);
        long long current = 1;
        for (int i = 0; i < n; ++i) {
            current = pq.top();
            pq.pop();
            for (int prime : primes) {
                long long next_num = current * prime;
                if (next_num > 0 && visited.find(next_num) == visited.end()) {
                    visited.insert(next_num);
                    pq.push(next_num);
                }
                if (current % prime == 0) break; 
            }
        }
        return current;
    }
};