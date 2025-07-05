#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        int ways = 0;
        // Enumerate both permutations of a and b
        for (int maskA = 0; maskA < 2; maskA++) {
            int A0 = a[maskA],     A1 = a[maskA^1];
            for (int maskB = 0; maskB < 2; maskB++) {
                int B0 = b[maskB], B1 = b[maskB^1];

                int sWins = 0, lWins = 0;
                // Round 1
                if (A0 > B0) sWins++;
                else if (A0 < B0) lWins++;
                // Round 2
                if (A1 > B1) sWins++;
                else if (A1 < B1) lWins++;

                if (sWins > lWins)
                    ways++;
            }
        }

        cout << ways << "\n";
    }
    return 0;
}
