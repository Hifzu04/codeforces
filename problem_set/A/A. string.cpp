#include <bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; 
    while(t--){    
    string s; 
    cin>>s;
    int numbrOf1  = 0;
    //cout<<s.size()<<"\n";
    for(int i =0 ; i< s.size(); i++){
        if(s[i] == '1') numbrOf1++;
    }
   cout<<numbrOf1<<"\n";


}
    return 0;
}