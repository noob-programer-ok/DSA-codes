class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX;
        int maxprofit = 0;
        for(int price : prices){
            minn = min(price,minn);
            maxprofit = max(maxprofit, price-minn);
        }
        return maxprofit;
    }
};