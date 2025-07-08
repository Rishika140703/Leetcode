class Solution {
    int[][] dp;

    public int maxValue(int[][] events, int k) {
        Arrays.sort(events, (a, b) -> a[0] - b[0]);  // sort by start time
        int n = events.length;
        dp = new int[k + 1][n];
        for (int[] row : dp)
            Arrays.fill(row, -1);

        return dfs(0, k, events);
    }

    private int dfs(int index, int k, int[][] events) {
        if (index == events.length || k == 0) return 0;
        if (dp[k][index] != -1) return dp[k][index];

        // Option 1: skip current event
        int notTake = dfs(index + 1, k, events);

        // Option 2: take current event
        int nextIndex = findNext(events, events[index][1], index + 1);  // binary search
        int take = events[index][2] + dfs(nextIndex, k - 1, events);

        return dp[k][index] = Math.max(take, notTake);
    }

    // Binary search for the next event that starts after endTime
    private int findNext(int[][] events, int endTime, int startIdx) {
        int low = startIdx, high = events.length;
        while (low < high) {
            int mid = (low + high) / 2;
            if (events[mid][0] > endTime) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}
