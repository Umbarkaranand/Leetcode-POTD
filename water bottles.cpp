class Solution {
public:

    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,remain=0;
        while(numBottles>=numExchange){
            ans+=(numBottles)/numExchange;
            remain=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            numBottles+=remain;
        }
        return ans;
    }
};
