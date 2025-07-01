#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> flag(n);
    for (int i = 0; i < n; i++) {
        cin >> flag[i];
    }

    // Check each row is uniform
    vector<char> row_color(n);
    for (int i = 0; i < n; i++) {
        char c = flag[i][0];
        for (int j = 1; j < m; j++) {
            if (flag[i][j] != c) {
                cout << "NO\n";
                return 0;
            }
        }
        row_color[i] = c;
    }

    // Check adjacent rows have different colours
    for (int i = 1; i < n; i++) {
        if (row_color[i] == row_color[i-1]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
