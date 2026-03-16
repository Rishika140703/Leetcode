#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    
    int calculateDays(vector<int>& weights, int capacity) {
        int days = 1;
        int currentLoad = 0;

        for (int w : weights) {
            if (currentLoad + w <= capacity) {
                currentLoad += w;
            } 
            else {
                days++;
                currentLoad = w;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            int requiredDays = calculateDays(weights, mid);

            if (requiredDays <= days) {
                high = mid; 
            } 
            else {
                low = mid + 1; 
            }
        }

        return low;
    }
};