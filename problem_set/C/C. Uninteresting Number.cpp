#include <bits/stdc++.h>
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
using namespace std;


string ans(int count2, int count3, ll sum){
     for (int i = 0; i <= count2; i++)
        {
            for (int j = 0; j <= count3; j++)
            {
                if ((sum + (2 * i) + (6 * j)) % 9 == 0)
                    return "YES";
            }
        }
        return "NO";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        ll count2 = 0;
        ll count3 = 0;
        ll sum = 0;
        for (ll i = 0; i < n.size(); i++)
        {
            if (n[i] == '2')
                count2++;
            if (n[i] == '3')
                count3++;
            sum += (n[i] - '0');
        }
        
        if (count2 > 10)
            count2 = 10;
        if (count3 > 10)
            count3 = 10;
        

        cout<<ans(count2 , count3, sum)<<"\n";
       
      
       

       
    }
     return 0;
}