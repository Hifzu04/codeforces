#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m; // Note: m = 1 in the easy version.
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        long long b;
        cin >> b; // since m = 1, we only have one b value.
        
        // 'cur' holds the last chosen value in our sequence.
        // Initialize it to a very small number.
        long long cur = -1e18;
        bool possible = true;
        
        for (int i = 0; i < n; i++){
            // Calculate the two possible values for a[i]
            long long option1 = a[i];
            long long option2 = b - a[i];
            
            // Determine the lower and higher of the two.
            long long low = min(option1, option2);
            long long high = max(option1, option2);
            
            if (low >= cur) {
                // We can choose the lower option.
                cur = low;
            } else if (high >= cur) {
                // The lower option is too small; choose the higher one.
                cur = high;
            } else {
                // Neither option is large enough, so it's impossible.
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
