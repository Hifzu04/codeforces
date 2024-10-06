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
        vector<ll> vec(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
        }
        sort(vec.begin(), vec.end());
        //ll mid_idx = n / 2;
        // ll half_avg = sum / (n * 2);
        
        // //auto it =  lower_bound(vec.begin(), vec.end(), half_avg);
        // ///cout << *(it)<< endl;
        // if(vec.size()<3){
        //     cout<<-1<<"\n";
        // }
        //  else if(vec[mid_idx] < half_avg)
        //  {
        //      cout << 0 << "\n";
        //  }
        //  else
        //  {
        //      ll ans = (vec[mid_idx] * 2 * n) - sum + 1;
        //      if (ans < 0)
        //          cout << -1 << "\n";
        //      else
        //          cout << ans << "\n";
        //  }
        ll ans = 0;
         if(vec.size()<3 ){
            cout<<-1<<"\n";

         } 
         else{
           ll j= n/2;
         ans =(vec[j]*2*n)-sum;
           if(ans<0)
            cout<<0<<"\n";
         else cout<<ans+1<<"\n";

           

           

         } 
            
        


    }

    return 0;
}