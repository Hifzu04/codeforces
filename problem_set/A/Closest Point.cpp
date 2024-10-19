#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n ; cin>>n;
        vector<int>vec(n);
        for(int i =0 ; i<n ; i++) cin>>vec[i];
        if(vec.size()== 2 and vec[1]-vec[0] >1){
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
        
     }
}