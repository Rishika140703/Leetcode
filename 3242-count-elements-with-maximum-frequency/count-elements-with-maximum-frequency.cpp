class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n =nums.size();
        int maxfreq = 1, ans = 0;

        for(int num : nums){
            mp[num]++;
            maxfreq = max(maxfreq, mp[num]);
        }

        for(auto it : mp){
            if(it.second == maxfreq){
                ans += it.second;
            } 
        }

        return ans;
    }
};