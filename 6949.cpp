#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll func(ll a,ll b,ll t)
{
    ll d = b-a;
    if(t==0)
    {
        return a;
    }
    ll r= t/d;
    ll pos =0;
    if(r==0 || r%2==0)
    {
        pos = a+(t%d);
    }
    else if(r%2)
    {
        pos = b-(t%d);
    }
    return pos;
}

int main()
{
    vector<pair<ll,ll>> v;

    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<n;i++)
    {
        ll p,q;
        cin>>p>>q;
        v.push_back({p,q});
    }
    vector<ll> cnts;
    for(ll i=0;i<m;i++)
    {
        ll x,y,t;
        cin>>x>>y>>t;
        ll cnt=0;
        for(auto pa: v)
        {
            ll pos = func(pa.first,pa.second,t);
            if(pos>=x && pos<=y){
                cnt++;
            }
        }
     cnts.push_back(cnt);
    }

    for(auto i : cnts)
    {
        cout<<i<<endl;
    }

}