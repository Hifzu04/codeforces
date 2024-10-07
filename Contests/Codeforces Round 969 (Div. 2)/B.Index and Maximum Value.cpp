#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // while (t--)
    // {
    //     int n, m;
    //     cin >> n >> m;
    //     int arr[n] = {0};
        
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     char c;
    //     int l, r;

    //     for (int i = 0; i < m; i++)
    //     {
    //         cin >> c >> l >> r;
    //         for (int i = 0; i < n; i++)
    //         {
    //             if (c == '+' and arr[i] <= r and arr[i] >= l)
    //                 arr[i] += 1;
    //         }
    //         for (int i = 0; i < n; i++)
    //         {
    //             if (c == '-' and arr[i] <= r and arr[i] >= l)
    //             {
    //                 arr[i] -= 1;
    //             }
    //         }
    //         int maxm = -1;
    //         for (int i = 0; i < n; i++)
    //         {
    //             maxm = max(arr[i], maxm);
    //         }
    //         cout << maxm << " ";
           
    //     }
    //     cout << endl;
    //}

    while (t--){
       
       int n , m ;
       cin>>n>>m;
       int maxm = -1;
       int arr[n];
       for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
        maxm = max(maxm, arr[i]);
       }
        for(int i=0; i<m ; i++){
            char c; 
            cin>>c;
            int l , r;
            cin>>l>>r;
            
         if(maxm <= r and maxm >= l){
             if(c =='+') maxm += 1;
             if(c== '-') maxm -= 1;
          } 
          cout<<maxm <<" ";
        
        }
        cout<<"\n";


    }

    return 0;
}