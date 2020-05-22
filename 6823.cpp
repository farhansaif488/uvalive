#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    while(cin>> st){
        long long int cnt=0,x=0,arr[]={1,0,0};
        for(int a=0;a<st.length();a++){
            if(!isdigit(st[a])){
                x=0;
                arr[0]=1;
                arr[1]=arr[2]=0;
            }
            else{
                x=(x+st[a]-48)%3;
                cnt+=arr[x];
                arr[x]++;
            }
        }
        cout<< cnt <<endl;
    }
    return 0;
}
//explaination
/*
// "iteration" #0 (st[a] = '')
x = 0
arr[] = {1,0,0}
cnt = 0
// iteration #1 (st[a]='1'). '1' is not divisible by three.
x = 1
arr[] = {1,1,0}
cnt   = 0
// iteration #2 (st[a]='2'). '12' is divisible by three.
x = 0
arr[] = {2,1,0}
cnt   = 1
// iteration #3 (st[a]='3'). '123' and '3' are divisible by three
x = 0
arr[] = {3,1,0}
cnt   = 3
// iteration #4 (st[a]='2'). No new divisible by three substrings
x = 2
arr[] = {3,1,1}
cnt   = 3
// iteration #5 (st[a]='1'). '12321', '321' and '21' are divisible by 3.
// note, the other times when x = 0, st[0..a] = '', '12', '123'
x = 0
arr[] = {4,1,1}
cnt   = 6
*/