#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        
        unordered_map<int, vector<int>> brand_costs;
        for (int i = 0; i < k; ++i) {
            int bi, ci;
            cin >> bi >> ci;
            brand_costs[bi].push_back(ci);
        }

        // Calculate the total cost for each brand
        vector<int> brand_totals;
        for (auto &pair : brand_costs) {
            int total_cost = 0;
            for (int cost : pair.second) {
                total_cost += cost;
            }
            brand_totals.push_back(total_cost);
        }

        // Sort brand_totals in descending order
        sort(brand_totals.rbegin(), brand_totals.rend());

    

        //  Sum the top `n` highest brand totals to maximize profit
        long long max_profit = 0;
        for (int i = 0; i < min(n, (int)brand_totals.size()); ++i) {
            max_profit += brand_totals[i];
        }

cout << max_profit << "\n";
    }

    return 0;
}
