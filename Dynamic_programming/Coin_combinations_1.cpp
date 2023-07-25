#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int N, X, c[maxN];
ll dp[maxX+1];

int main(){
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; i++)
        scanf("%d", &c[i]);

    dp[0] = 1;
    for(int i = 0; i <=X; i++)
            for(int j = 0; j < N; j++)
                if(i-c[j]>=0)
                    dp[i] = (dp[i] + dp[i-c[j]]) % MOD;

    printf("%lld\n", dp[X]);
}