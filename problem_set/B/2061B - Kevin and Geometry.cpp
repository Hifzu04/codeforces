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
    map<ll,ll>mpp;
    ll n ; cin>>n;
    vector<ll>arr(n);
    loop{
        cin>>arr[i];
       // ll k = arr[i];  
        mpp[arr[i]]++;
    }
    ll max_ident = 0;
    bool flag =1;
    //choosen two distinct identical largest element
    for(auto it: mpp){
        if(it.second>1 and it.first>max_ident){
            max_ident = it.first;
            flag = 0;
            
        }
    }

    if(flag){
        cout<<-1<<"\n";
        continue;
    }
    // cout<<max_ident;

    // for(auto it: mpp){
    //     if(it.first == max_ident){
    //         it.second -=2;
    //         break;
    //     }
    // }
    int cnt =0;
   //making the two identical element to zero
   loop{
        if(arr[i]==max_ident && cnt<2){
            arr[i]=0;
            cnt++;
             
        }
        if(cnt==2 )break;
   }


   sort(arr.begin() , arr.end());

     bool flag2 = 1;
   for(int i =2; i<n-1; i++){
    if(arr[i+1] - arr[i] < (2*max_ident)){
        cout<<max_ident<<" "<<max_ident<<" "<< arr[i]<<" "<<arr[i+1]<<"\n";
        flag2= 0;
        break;
    }
    
   }

   if(flag2){
    cout<<-1<<"\n";
   }








}
    return 0;
}