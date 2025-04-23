#include <bits/stdc++.h>
using namespace std;

bool solve(string s1, string s2) {
    int i = 0, j = 0;
    int n1 = s1.size(), n2 = s2.size();

    while (i < n1 && j < n2) {
        if (s1[i] != s2[j]) return false;

        char ch = s1[i];
        int cnt1 = 0, cnt2 = 0;

        while (i < n1 && s1[i] == ch) {
            cnt1++;
            i++;
        }
        while (j < n2 && s2[j] == ch) {
            cnt2++;
            j++;
        }

        if (2*cnt1<cnt2 || cnt2<cnt1) return false;
    }

    return i == n1 && j == n2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (solve(s1, s2) ? "YES" : "NO") << endl;
    }
    return 0;
}