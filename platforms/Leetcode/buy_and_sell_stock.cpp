/*
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,max_profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min) min=prices[i];
            if((prices[i]-min)>max_profit) max_profit=(prices[i]-min);
        }
        return max_profit;
    }
};
