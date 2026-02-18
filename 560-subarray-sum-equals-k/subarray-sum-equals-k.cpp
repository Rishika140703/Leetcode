#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefix_sum = 0;

        unordered_map<int, int> hashmap;
        hashmap[0] = 1;  // handles subarrays starting at index 0

        for (int num : nums) {
            prefix_sum += num;

            if (hashmap.count(prefix_sum - k)) {
                count += hashmap[prefix_sum - k];
            }

            hashmap[prefix_sum]++;
        }

        return count;
    }
};
