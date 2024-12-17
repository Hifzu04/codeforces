    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t ;
        cin>>t;
        while(t--){
            ll m,a,b,c;
            cin>>m>>a>>b>>c;
            ll ans = 0 ;
            ll seat_vacant =  0 ;
            ans+=min(m,a)+ min(m,b);
            if(m>a) seat_vacant+=(m-a);
            if(m>b) seat_vacant+=(m-b);
            ans+= min(seat_vacant,c);

            cout<<ans<<"\n";

        }


        return 0;
    }