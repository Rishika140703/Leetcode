class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;
        int maxarea = 0;

        while (i < j) {
            int res = (j - i) * min(height[i], height[j]);
            maxarea = max(maxarea, res);

        
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxarea;
    }
};
