#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,n;

    cin>>t;
    vector<string> ans;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.rbegin(),v.rend());
        int f=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                f=0;
                ans.push_back("NO");
                break;
            }
        }
        if(f==1)
        ans.push_back("YES");
    }

    for(auto b: ans)
    {
        cout<<b<<endl;
    }
}