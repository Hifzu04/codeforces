#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        ll s;
        cin >> n >> s;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int dx, dy;
            ll x, y;
            cin >> dx >> dy >> x >> y;

            ll A = (dx ==  1 ? (s - x) : x);
            ll B = (dy ==  1 ? (s - y) : y);
            if (A == B) 
                ++count;
        }
        cout << count << "\n";
    }
    return 0;
}
