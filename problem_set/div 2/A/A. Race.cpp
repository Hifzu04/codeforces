#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        
        if ((x - a) > 0 && (y - a) > 0) {
            cout << "YES\n";
        }
        else if ((x - a) < 0 && (y - a) < 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
