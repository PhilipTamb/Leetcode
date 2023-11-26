
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = prices[0];
        if (prices.size() == 0)
            return 0;

        for (int i = 0; i < prices.size(); i++)
        { // i index buy
            if (min_price > prices[i])
                min_price = prices[i];
            if (prices[i] - min_price > max_profit)
                max_profit = prices[i] - min_price;
        }
        return max_profit;
    }
};