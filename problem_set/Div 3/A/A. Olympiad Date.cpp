#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

int getans(int arr[] , int n){

    bool cond0 = 0, cond1 = 0, cond2 = 0, cond3 = 0, cond5 = 0;

    int cntzero =0 ; int cnt2=0;
    loop{
        if (arr[i]==0){ 
            cntzero++;
            if (cntzero ==3){
                cond0 =1;
            }
        
        }
        if (arr[i]==1){
            cond1=1;
        }
         if(arr[i]==2){
            cnt2++;
            if(cnt2==2){
                cond2=1 ;
            }
        }
         if (arr[i]==3){
            cond3=1;
        }
         if (arr[i]==5){
            cond5=1;
        }
        if(cond0 ==1 && cond1==1 && cond2==1 && cond3==1 && cond5==1){
            return i+1;
        }
    }
    return 0;
    
}

void solve() {
    int n ; cin>>n;
    int arr[n];
    loop{
        cin>>arr[i];    
    }


    int myans = getans(arr , n );

    cout<<myans<<"\n";

}
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1; cin>>t; 
    while(t--){    
    solve();

}
    return 0;
}