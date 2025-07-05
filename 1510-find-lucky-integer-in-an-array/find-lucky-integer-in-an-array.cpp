class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int luckyint = -1;

        for(auto &num : arr){
            mp[num]++;
        }
        for(auto &it : mp){
            if(it.first == it.second){
                luckyint = max(luckyint, it.second);
            }
        }
        return luckyint;


    }
};