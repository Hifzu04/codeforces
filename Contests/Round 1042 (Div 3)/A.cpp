#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int iterations = 0;

        while (true) {
            bool step1 = false, step2 = false;

            // Step 1: decrease some a[i] > b[i]
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    step1 = true;
                    break;
                }
            }

            // Step 2: increase some a[i] < b[i]
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    step2 = true;
                    break;
                }
            }

            iterations++;

            // If Step 1 was skipped, stop
            if (!step1) break;
        }

        cout << iterations << "\n";
    }

    return 0;
}
