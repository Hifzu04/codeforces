#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcases;
    cin >> testcases;

    while (testcases--)
    {
       // ll steps = 0;
        ll a, b, k;
        cin >> a >> b >> k;
      if((a+k-1)/k > (b+k-1)/k){
        ll steps = (a+k-1)/k;
        cout<<(steps*2)-1<<"\n";
      }
      else{
        cout<<2*((b+k-1)/k)<<"\n";
      }
    
}
return 0;
 
}