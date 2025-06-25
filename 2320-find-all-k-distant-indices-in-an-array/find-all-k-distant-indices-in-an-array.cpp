class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<bool> included(n, false);  // tracks if index is already added
        vector<int> ans;

        for (int j = 0; j < n; j++) {
            if (nums[j] == key) {
                int start = max(0, j - k);
                int end = min(n - 1, j + k);
                for (int i = start; i <= end; i++) {
                    if (!included[i]) {
                        included[i] = true;
                        ans.push_back(i);
                    }
                }
            }
        }

        return ans;
    }
};
