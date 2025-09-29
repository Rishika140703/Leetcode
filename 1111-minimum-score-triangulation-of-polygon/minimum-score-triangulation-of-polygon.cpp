class Solution {
public:
    int t[51][51];

    int solve(vector<int>& values, int i, int j){
        if(j-i+1 < 3) return 0;

        if(t[i][j] != INT_MAX) return t[i][j];

        int result = INT_MAX;

        for(int k = i+1; k<j; k++){
            int wt = values[i] * values[j] * values[k] + solve(values, i, k) + solve(values, k, j);
            result = min(result, wt);

        }
        return t[i][j] = result;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        fill(&t[0][0], &t[0][0] + 51*51, INT_MAX);
        return solve(values, 0, n-1);

    }
};