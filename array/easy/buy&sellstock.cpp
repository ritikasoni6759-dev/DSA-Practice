class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy[n];
        bestbuy[0]=prices[0];

        for(int i=1;i<n;i++)
             bestbuy[i]=min(bestbuy[i-1],prices[i-1]);

        int profit=0;
        for( int i=0;i<n;i++)
            {
                int currprofit= prices[i]-bestbuy[i];
                profit=max(profit,currprofit);
            }
        return profit;
    }
};