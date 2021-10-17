/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

// Runtime: 116ms
// Memory Usage: 93.4 MB
// Special Thanks to: Jared Tanuwidjaja

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int maxPrice = prices.at(prices.size() - 1);
        
        for(int i = prices.size() - 1; i >= 0; i--) {
            if(maxPrice - prices.at(i) < 0) {
                maxPrice = prices.at(i);
            }
            if(maxPrice - prices.at(i) > profit) {
                profit = maxPrice - prices.at(i);
            }
        }
        // for(int i = lowestIndex; i < prices.size(); i++) {
        //     if(profit < prices.at(i) - lowest) {
        //         profit = prices.at(i) - lowest;
        //     }
        //     finalProfit = max(profit, currProfit);
        // }
        return profit;
    }
};
