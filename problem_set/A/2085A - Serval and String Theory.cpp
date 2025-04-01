#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool allSame(const string &s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[0]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        // Case 1: If all letters are the same, s remains unchanged.
        if(allSame(s)){
            cout << "NO" << "\n";
            continue;
        }
        
        // Create the reverse of s.
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        // Case 2: If s is already universal.
        if(s < rev){
            cout << "YES" << "\n";
            continue;
        }
        
        // Case 3: s is not universal.
        // If no swap operations are allowed, it's impossible.
        if(k == 0){
            cout << "NO" << "\n";
        } else {
            // With at least one swap (k >= 1) we can always swap a pair of mismatched letters (or swap distinct letters in a palindrome)
            // to create a string s' such that s' < reverse(s').
            cout << "YES" << "\n";
        }
    }
    
    return 0;
}
