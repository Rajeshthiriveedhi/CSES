#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int N, X, c[maxN];
ll dp[maxX+1]={0};

int main(){
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; i++)
        scanf("%d", &c[i]);
    dp[0]=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=X-c[i];j++)
            dp[j+c[i]]=(dp[j+c[i]]+dp[j])%MOD;
    }

    printf("%lld\n", dp[X]);
}