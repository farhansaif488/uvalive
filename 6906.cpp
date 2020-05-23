#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 44

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };


ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll male[size1 + 5], total[size1 + 5];

int main()
{
    ll tc, num, t = 1, pownum;

    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    // freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){

        sc2(num, pownum);

        ll arr[num];

        for(ll i = 0; i < num;  i++)
            sc1(arr[i]);

        sort(arr, arr + num);

        ll ans = 1;

        for(ll i = 1; i < num; i++){
            if(abs(arr[i] - arr[i - 1]) <= pownum) continue;
            else ans++;
        }

        cout << "Case #" << t++ << ": ";

        pf1(ans);
    }

    return 0;
}