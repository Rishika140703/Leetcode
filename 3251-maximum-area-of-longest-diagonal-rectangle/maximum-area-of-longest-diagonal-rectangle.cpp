class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int longestdiag = 0;
        int maxarea = 0;

        for(int i =0; i<n; i++){
            int diagsq = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
            int area = dimensions[i][0] * dimensions[i][1];
            if(diagsq>longestdiag){
                longestdiag = diagsq;
                maxarea = area;
            } else if(diagsq == longestdiag){
                maxarea = max(area, maxarea);
            }
        }
        return maxarea;
    }
};