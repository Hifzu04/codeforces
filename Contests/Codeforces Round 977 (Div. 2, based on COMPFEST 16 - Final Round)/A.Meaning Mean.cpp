#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll meaningmean(vector<ll>vec , int n ){
    multiset<ll>ms(vec.begin() , vec.end());

    while(ms.size()>1){
        auto it1 = ms.begin();
        ll firstelement = *it1;
        ms.erase(it1);
        
        auto it2 = ms.begin();
        ll secondelement = *it2;
        ms.erase(it2);

        ll avg = (firstelement+secondelement)/2;
        ms.insert(avg);
    }
    return *ms.begin();

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>vec(n);
        for(int i =0; i<n; i++){
            cin>>vec[i];
        }
        ll ans = meaningmean(vec, n);
        cout<<ans<<"\n";
    }


    return 0;
}