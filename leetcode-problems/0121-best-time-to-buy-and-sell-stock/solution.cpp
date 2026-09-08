class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=0;
        for (auto& x:prices){
            if (x<minPrice){
                minPrice=x;
            }
            int profit=x-minPrice;
            if (profit>maxProfit){
                maxProfit=profit;
            }
        }
        return maxProfit;
    }
};
