class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
         int drank = 0;
        int full = numBottles, empty = 0;

        while (full > 0) {
            // drink all full bottles
            drank += full;
            empty += full;
            full = 0;

            // check if we can exchange
            if (empty >= numExchange) {
                empty -= numExchange;  // spend numExchange empties
                full += 1;             // gain 1 new full bottle
                numExchange++;         // cost increases
            }
        }

        return drank;
        
    }
};