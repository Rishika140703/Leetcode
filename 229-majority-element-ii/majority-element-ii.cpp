class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> res;

        for(int i =0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > (n/3)){
                res.push_back(it.first);
            }
        }
        return res;
    }
};