class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int flips = 0;
        int flipCountFromPastFori = 0;
        vector<bool> isFlipped(n, false);

        for(int i= 0; i<n; i++){
            if(i>=3 && isFlipped[i-3] == true){
                flipCountFromPastFori--;
            }

            if(flipCountFromPastFori %2 == nums[i]){
                if(i+3 > n){
                    return -1;
                }

                flipCountFromPastFori++;
                flips++;
                isFlipped[i] = true;
            }
        }
        return flips;


    }
};