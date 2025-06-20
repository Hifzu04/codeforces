#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        // count of each letter in the suffix
        array<int,26> suffix = {0}, prefix = {0};
        for (char c : s) 
            suffix[c - 'a']++;

        bool ok = false;
        for (int i = 0; i < n; i++) {
            // remove s[i] from suffix
            suffix[s[i] - 'a']--;

            // only positions eligible for b of length 1 are i=1..n-2
            if (i >= 1 && i <= n-2) {
                int idx = s[i] - 'a';
                if (prefix[idx] > 0 || suffix[idx] > 0) {
                    ok = true;
                    break;
                }
            }

            // add s[i] to prefix for the next iterations
            prefix[s[i] - 'a']++;
        }

        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}
