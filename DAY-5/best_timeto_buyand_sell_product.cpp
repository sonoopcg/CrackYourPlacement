#include <bits/stdc++.h>
using namespace std;

int maxProfit(const vector<int>& prices) {
    if (prices.empty()) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout<< maxProfit(prices1) <<endl;
   

    return 0;
}
