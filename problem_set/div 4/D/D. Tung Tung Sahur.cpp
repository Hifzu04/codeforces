#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    string a , b; cin>>a>>b;
    int n = a.size() ; int m = b.size();
    if(n>m || m>2*n || a[0]!=b[0]) {
        cout<<"NO"<<'\n';
        return;
    }

    vector<int>acnt;
    vector<int>bcnt;
    int cnt=1;
    for(int i =1 ; i<n; i++){
        if(a[i]==a[i-1]){
            cnt++;
            
        }
        else{
            acnt.push_back(cnt);
            cnt=1;
        }
    }
    acnt.push_back(cnt);

    for(int i =1 ; i<m; i++){
        if(b[i]==b[i-1]){
            cnt++;
            
        }
        else{
            bcnt.push_back(cnt);
            cnt=1;
        }
    }
    bcnt.push_back(cnt);


    if(acnt.size()!= bcnt.size()) {
        cout<<"NO\n";
        return; 
    }
    for(int i =0 ; i< acnt.size() ; i++){
        if(acnt[i] >bcnt[i] || bcnt[i]>2*acnt[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";



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