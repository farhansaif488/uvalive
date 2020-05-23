#include <bits/stdc++.h>
using namespace std;
const int maxn = 1115;
bool vis[maxn];
int prime[maxn], tot, flag[maxn], op[maxn], zi[maxn];
int n, k, cnt;
vector <int> v;
void pre_deal(){
    memset(vis, false, sizeof(vis));
    for(int i = 2; i < maxn; i++){
        if(!vis[i]){
            for(int j = i + i; j < maxn; j += i) vis[j] = 1;
            prime[tot++] = i;
        }
    }
}
int cal(int mask){
    for(int i = 1; i <= n; i++) flag[i] = 0;
    for(int i = 0; i < cnt; i++){
        if(mask>>i&1){
            for(int j = op[i]; j <= n; j += op[i]){
                flag[j] ^= 1;
            }
        }
    }
    for(auto it : v){
        int add = 0;
        for(int i = it; i <= n; i += it){
            if(flag[i] == 0) ++add;
            else --add;
        }
        if(add > 0){
            for(int i = it; i <= n; i += it) flag[i] ^= 1;
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++) res += flag[i];
    return res;
}

int main(){
    pre_deal();
    int T, ks = 0;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d", &n, &k);
        for(int i = 0; i < k; i++) scanf("%d", &zi[i]);
        sort(zi, zi+k);
        cnt = 0;
        v.clear();
        for(int i = 0; i < k; i++){
            if(zi[i] <= 31){
                op[cnt++] = zi[i];
            }
            else{
                v.push_back(zi[i]);
            }
        }
        int ans = 0;
        for(int i = 0; i < (1<<cnt); i++){
            ans = max(ans, cal(i));
        }
        printf("Case #%d: %d\n", ++ks, ans);
    }
    return 0;
}
