class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = numBottles;

        while(numBottles >= numExchange){
        int exchangewFull = numBottles / numExchange;
        int emptyLeft = numBottles % numExchange;
        drank += exchangewFull;
        numBottles = emptyLeft + exchangewFull; 
        }
        return drank;
    }
};