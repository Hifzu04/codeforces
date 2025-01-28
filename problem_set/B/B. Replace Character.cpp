#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n ; cin>>n;
        string str;
        cin >> str;

        map<char, int> freq_map;

        // Count frequencies
        for (char c : str) {
            freq_map[c]++;
        }

        // Find the most and least frequent characters
        char most_frequent_char = '\0', least_frequent_char = '\0';
        int max_frequency = 0, min_frequency = INT_MAX;

        for (const auto& pair : freq_map) {
            if (pair.second > max_frequency) {
                max_frequency = pair.second;
                most_frequent_char = pair.first;
            }
            if (pair.second < min_frequency) {
                min_frequency = pair.second;
                least_frequent_char = pair.first;
            }
        }

// Replace least frequent character with the most frequent one
 if (least_frequent_char == most_frequent_char) {
        for (ll i = 0; i < n; i++) {
            if (str[i] != least_frequent_char) {
                str[i] = least_frequent_char;
                break;
            }
        }
        cout << str << endl;
    } else {
        for (ll i = 0; i < n; i++) {
            if (str[i] == least_frequent_char) {
                str[i] = most_frequent_char;
                break;
            }
        }
        cout << str << endl;
    }
}


    return 0;
}
