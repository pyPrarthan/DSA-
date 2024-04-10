#include <vector>
#include <iostream>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int buy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else if (prices[i] - buy > profit)
            {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

int main()
{
    // Test Case 1:
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    Solution s;
    int profit1 = s.maxProfit(prices1);
    std::cout << "Test Case 1 - Expected profit: 5, Actual profit: " << profit1 << std::endl;

    // Test Case 2:
    std::vector<int> prices2 = {7, 6, 4, 3, 1};
    int profit2 = s.maxProfit(prices2);
    std::cout << "Test Case 2 - Expected profit: 0, Actual profit: " << profit2 << std::endl;

    return 0;
}
