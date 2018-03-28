#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>
#define max(a,b) a>b?a:b
int main(){
	int n, i;
	scanf("%d", &n);
	int* data = new int[n + 1];
	int* dp = new int[n + 1];
	memset(data, 0, sizeof(data));
	memset(dp, 0, sizeof(dp));
	//반례  7  7  1  5  7  7  1 3  정답31 내답29
		//      



	for (i = 1; i <= n; i++)	scanf("%d", data + i);
	dp[1] = data[1];
	dp[2] = data[1] + data[2];
	for (i = 3; i <= n; i++){
		dp[i] = max(data[i] + data[i - 1] + dp[i - 3] , data[i] + dp[i - 2]);
		dp[i] = dp[i-1] > dp[i] ? dp[i-1] : dp[i];
	}
	printf("%d", dp[n]);
}
