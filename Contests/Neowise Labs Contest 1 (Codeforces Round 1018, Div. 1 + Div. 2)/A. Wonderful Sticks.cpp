#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Count total number of '<' in s
        int cntMin = 0;
        for (char c : s) {
            if (c == '<') cntMin++;
        }

        // The first stick length
        int first = cntMin + 1;
        vector<int> a(n);
        a[0] = first;

        // Initialize prefix minimum and maximum
        int prefMin = first, prefMax = first;

        // Fill the rest according to the rules
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '<') {
                // New minimum
                prefMin--;
                a[i] = prefMin;
            } else {
                // New maximum
                prefMax++;
                a[i] = prefMax;
            }
        }

        // Output the arrangement
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
    }

    return 0;
}
