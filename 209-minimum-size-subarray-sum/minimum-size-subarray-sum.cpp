class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int win_sum=0, ans = n+1;
        int left=0, right =0;

        while(right<n){
            win_sum += nums[right];
            right++;
            while(win_sum >= target){
                ans = min(ans, right-left);
                win_sum -= nums[left];
                left++;
            }
        }
        if(ans == n+1) return 0;

        return ans;

    }
};