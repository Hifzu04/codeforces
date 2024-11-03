#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i = 0 ; i< 2*n; i++){
            cin>>a[i];
        }
        int numberZeroes= 0;
        int numverOnes = 0;
        for(int i=0 ; i<2*n ; i++){
            if(a[i] == 0 ) numberZeroes++;
            else numverOnes++;
        }
        int ans = 1 ;
        if(numberZeroes %2 ==0 && numverOnes%2 ==0) ans =0;

        cout<<ans<<" "<<min(numberZeroes,numverOnes)<<"\n";
    }


    return 0;
}