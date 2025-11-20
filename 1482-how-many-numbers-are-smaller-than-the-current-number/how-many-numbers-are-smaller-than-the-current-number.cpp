class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        vector<int> temp = nums;  // <-- FIX: copy nums
        sort(temp.begin(), temp.end());
        
        map<int, int> mp;
        int rank = 0;
        
        // Assign the smallest index to each unique number
        for (int i = 0; i < n; i++) {
            if (mp.find(temp[i]) == mp.end()) {
                mp[temp[i]] = i;  // first occurrence = count of smaller numbers
            }
        }

        for (int num : nums) {
            ans.push_back(mp[num]);
        }

        return ans;
    }
};
