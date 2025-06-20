#include <bits/stdc++.h>
using namespace std;
static const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        string L, R;
        cin >> L >> R;
        int n = L.size();
        
        vector<array<array<int,2>,2>> dp(n+1);
        for(int i=0;i<=n;i++)
            for(int lo=0;lo<2;lo++)
                for(int hi=0;hi<2;hi++)
                    dp[i][lo][hi] = INF;
        dp[0][1][1] = 0;

        for(int i=0;i<n;i++){
            for(int lo=0;lo<2;lo++){
                for(int hi=0;hi<2;hi++){
                    int cur = dp[i][lo][hi];
                    if(cur==INF) continue;
                    int lo_d = lo ? (L[i]-'0') : 0;
                    int hi_d = hi ? (R[i]-'0') : 9;
                    for(int d = lo_d; d <= hi_d; d++){
                        int nlo = lo && (d==lo_d);
                        int nhi = hi && (d==hi_d);
                        int cost = (d == (L[i]-'0')) + (d == (R[i]-'0'));
                        dp[i+1][nlo][nhi] = min(dp[i+1][nlo][nhi], cur + cost);
                    }
                }
            }
        }

        
        int ans = INF;
        for(int lo=0; lo<2; lo++)
            for(int hi=0; hi<2; hi++)
                ans = min(ans, dp[n][lo][hi]);
        cout << ans << "\n";
    }
    return 0;
}
