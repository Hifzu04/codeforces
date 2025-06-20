#include <bits/stdc++.h>
using ll= long long;
#define loop for(ll i=0;i<n;i++)
using namespace std;

void solve() {
    int n ; cin>>n;
    vector<int>veca(n);
    vector<int>vecb(n);
    loop{
        cin>>veca[i];
        
    }loop{
        cin>>vecb[i];   
    }
    vector<pair<int,int>>op;
    
    //operation of 3rd type 
    loop{
       if(veca[i]>vecb[i]){
        swap(veca[i],vecb[i]);
        op.emplace_back(3, i+1);

       }
    }

    //op of 1st type
    loop{
        for(int j=0 ; j<(n-i-1) ; j++){
            if(veca[j]>veca[j+1]){
                op.emplace_back(1, j+1);
                swap(veca[j],veca[j+1]);

            }
        }
    }
   

    //op of 2st type
    loop{
        for(int j=0 ; j<(n-i-1) ; j++){
            if(vecb[j]>vecb[j+1]){
                op.emplace_back(2, j+1);
                swap(vecb[j],vecb[j+1]);

            }
        }
    }

    cout<<op.size()<<"\n";
    

       for(auto & [t, idx] : op){
            
            cout << t << " " << (idx) << "\n";
        }
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