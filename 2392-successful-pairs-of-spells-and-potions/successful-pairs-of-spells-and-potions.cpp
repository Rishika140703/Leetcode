#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n, 0);

        sort(potions.begin(), potions.end());

        for (int i = 0; i < n; i++) {
            long long s = spells[i];
            // Minimum potion strength required
            long long minPotion = (success + s - 1) / s;  // ceil(success / s)
            
            // Find the first potion >= minPotion
            auto it = lower_bound(potions.begin(), potions.end(), minPotion);
            
            ans[i] = potions.end() - it;  // count of valid potions
        }
        return ans;
    }
};
