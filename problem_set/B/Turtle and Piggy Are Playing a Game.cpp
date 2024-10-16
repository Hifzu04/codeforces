#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>v(n);
        for(int i = 0 ; i< n ; i++ ){
            cin>>v[i];
        }


        
       sort(v.begin() ,v.end());
        //for(int i = n; i>=1 ; i--){
            // if(i%2==0){
            // v[i] = max(v[i], v[i-1]);
            // v.pop_back();
            // }
            // else{
            //     v[i] = min(v[i], v[i-1]);
            //     v.pop_back();
            // }}


        cout<<v[n/2]<<"\n";
    }


    return 0;
}