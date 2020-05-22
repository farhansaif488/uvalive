#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pp   pair<int,pair<int,int>> 
int main()
{
    int arr[64][64];

    ll t;
    cin>>t;
    vector<pp> ans; 
    while(t--)
    {
        memset(arr,0,sizeof(arr));

        int x,y;cin>>x>>y;
        char c = 'R';
        string s;
        cin>>s;
        int o=1;
        arr[x][y]++;
        int cnt =0;
        for(auto p: s)
        {
            if(p=='L' || p== 'R')
            {
                c=p;
                if(c=='R')
                {
                    o++;
                }
                if (c=='L'){
                    o--;
                }
                if(o>=5)
                {
                    o-=4;
                }
                if(o==0)
                {
                    o=4;
                }
                continue;
            }
             
            if(o==1)
            {
                y++;
            }
            if(o==2)
            {
                x++;
            }
            if(o==3)
            {
                y--;
            }
            if(o==4)
            {
                x--;
            }
            arr[x][y]++;
            if(arr[x][y]==2){
                cnt++;
            }
        }
          ans.push_back({x,{y,cnt}});
    }
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<"Case #"<<i+1<<": "<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
    }
}