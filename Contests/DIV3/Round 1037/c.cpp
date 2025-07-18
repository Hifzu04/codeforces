#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<long long> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        long long startHeight = h[k - 1];
        long long maxHeight = *max_element(h.begin(), h.end());

        
        if (startHeight == maxHeight) {
            cout << "YES\n";
            continue;
        }

        // Collect all distinct heights and sort them.
        vector<long long> distinctHeights = h;
        sort(distinctHeights.begin(), distinctHeights.end());
        distinctHeights.erase(
            unique(distinctHeights.begin(), distinctHeights.end()),
            distinctHeights.end()
        );

        // Find where our startHeight sits in the sorted distinct list.
        int pos = int(
            lower_bound(distinctHeights.begin(),
                        distinctHeights.end(),
                        startHeight)
            - distinctHeights.begin()
        );

        
        bool canReach = true;
        for (int i = pos; i + 1 < (int)distinctHeights.size(); i++) {
            long long curr = distinctHeights[i];
            long long next = distinctHeights[i + 1];
            if (next - curr > startHeight) {
                canReach = false;
                break;
            }
        }

        cout << (canReach ? "YES\n" : "NO\n");
    }

    return 0;
}
