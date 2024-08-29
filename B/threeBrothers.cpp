#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a , b ;
    cin>>a>>b;

    if(a-b ==2 || b-a ==2) cout<<2;
    else if ((a==1 and b==2) || (a==2 and b==1)) cout<<3;
    else cout<<1;


    return 0;
}