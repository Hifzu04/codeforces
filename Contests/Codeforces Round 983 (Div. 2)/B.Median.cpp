#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
       if( n==1 ) cout<<"1\n1\n";
      else if(k==1 || k==n) cout<<"-1\n";
       else {
        if(k%2==0) {
            cout<<"3\n";
            cout<<1<<" "<<k<<" "<<k+1<<"\n";
        }
        else{
            cout<<"3\n";
            cout<<1<<" "<<k-1<<" "<<k+2<<"\n";
        }
       }
    }

    return 0;
}