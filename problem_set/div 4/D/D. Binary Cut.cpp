#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    // Count transitions
    int c01 = 0, c10 = 0;
    for (int i = 1; i < n; i++) {
        if (s[i-1] == '0' && s[i] == '1') c01++;
        if (s[i-1] == '1' && s[i] == '0') c10++;
    }

    // Total runs
    int R = c01 + c10 + 1;

    int ans;
    if (c10 == 0) {
        // already sorted (only 0→1 transitions or constant string)
        ans = 1;
    } else if (c01 > 0) {
        // can form one mixed 0*1* piece, saving one cut
        ans = R - 1;
    } else {
        // only 1→0 transitions: no valid mixed piece
        ans = R;
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
