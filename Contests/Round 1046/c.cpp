#include <bits/stdc++.h>
using ll = long long;
#define f(i, n) for (ll i = 0; (i) < (n); (i)++)
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

int g(vector<int> &vec, map<int, vector<int>> &mpp, int i , vector<int>&dp)
{
     if(i>= vec.size()) return 0;
    
     if(dp[i]!= -1) return dp[i];

    int nottake = g(vec, mpp, i + 1 ,dp);
    int currpos = lower_bound(mpp[vec[i]].begin(), mpp[vec[i]].end(), i) - mpp[vec[i]].begin();

    int n = mpp[vec[i]].size();

    if (currpos + vec[i] - 1 < n)
    {
        nottake =max(nottake , vec[i] + g(vec,mpp , mpp[vec[i]][currpos+vec[i]-1] +1 , dp));
        
    }
    return dp[i] = nottake;
   
}

void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> mpp;
    vector<int> vec(n);
    f(i, n)
    {
        int x;
        cin >> x;
        vec[i] = x;
        mpp[x].push_back(i);
    }
    vector<int>dp(n+1 ,-1);
    cout << g(vec, mpp, 0 ,dp) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}