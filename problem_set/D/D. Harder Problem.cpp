#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int  t ;  
    cin>>t;
    while(t--){
        int  n  ;  cin>>n;
        set<ll>st;
        for(int i = 0 ; i<n; i++) {
            st.insert(i+1);
        }
        int arr[n];
        for(int i =0 ; i<n ; i++){
           cin>>arr[i];
        }

        for(int i =0; i<n ; i++){
            if(st.find(arr[i]) != st.end()){
                cout<<arr[i]<<" ";
                st.erase(arr[i]);
            }
            else{
                cout<< *st.begin()<<" ";
                st.erase(st.begin());
            }
        }
        cout<<"\n";
    }


    return 0;
}