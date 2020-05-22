#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    int a[100][100],b[100][100];
    
    memset(a,-1,sizeof(a));
    memset(b,-1,sizeof(b));

    int n,m;
    cin>>m>>n; //m rows ,n col

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=1;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i][j]==0)
            {
                for(int p=0;p<n;p++)
                {
                    a[i][p]=0;
                }
                for(int p=0;p<m;p++)
                {
                    a[p][j]=0;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum |= a[i][m];
        }
        for(int j=0;j<n;j++)
        {
            sum |= a[n][j];
        }
        if(sum != b[i][j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;





}