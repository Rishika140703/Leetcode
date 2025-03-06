class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n*n;

        long long gridSum = 0;
        long long gridSqSum =0;

        for(int i =0; i< n; i++){
            for(int j =0; j<n; j++){
                gridSum += grid[i][j];
                gridSqSum += 1LL * grid[i][j]*grid[i][j];
            }
        }

        long long sum = (1LL * N * (N+1))/2;
        long long sqSum = (1LL * N * (N+1) * (2*N+1))/6;

        long long sumDiff = gridSum - sum;
        long long sqDiff = gridSqSum - sqSum;

        long long a = (sqDiff/sumDiff + sumDiff)/2;
        long long b = (sqDiff/sumDiff - sumDiff)/2;

        return {(int)a, (int)b};


    }
};