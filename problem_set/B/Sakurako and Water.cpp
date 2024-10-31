#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            int minm = 0;
            for (int j = 0; j < n-i; j++)
            {
                if(arr[i+j][j]<0)
                minm = min(minm, arr[i + j][j]);
            }
            ans += minm;
        }

        for(int j= 1 ; j<n; j++){
            int minm = 0;
            for(int i = 0; i<n-j ;i++){
                if(arr[i][i+j]<0){
                    minm = min(minm , arr[i][i+j]);
                }
            }
            ans+=minm;
        }

       
        cout << -ans << " \n";
    }

    return 0;
}