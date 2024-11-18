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
        ll n;
        cin >> n;
        if (n < 5)
            cout << -1;
        else
        {
            for(int i =1; i<= n ; i++){
                if(i%2==1 and i!=5) cout<<i<<' ';
            }
            cout<<5<<" "<<4<<" ";
            for(int i = 1 ; i<=n ; i++){
                  if(i%2==0 and i!=4){
                    cout<<i<<" ";
                  }
            }
        }
        cout << "\n";
    }

    return 0;
}