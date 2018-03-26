#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>
#define max(a,b) a>b?a:b 
/*계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다.
즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
연속된 세 개의 계단을 모두 밟아서는 안된다. 단, 시작점은 계단에 포함되지 않는다.
마지막 도착 계단은 반드시 밟아야 한다.*/
int dp[301];
int main(){

	int n, i;
	scanf("%d", &n);
	int* data = new int[n+1];
	memset(data, 0, sizeof(data));
	for (i = 1; i <= n; i++)
		scanf("%d", data+i);

	dp[1] = data[1];
	
	for (i = 2; i < n; i++){
		//dp[i] = max(dp[i - 1] + dp[i - 2], dp[i - 2] + dp[i]);
//		dp[i] = dp[i - 1] + data[i] > dp[i - 1] + data[i + 1] ? dp[i - 1] + data[i] : dp[i - 1];
		dp[i] = dp[i - 1] + data[i] > dp[i - 1] + data[i + 1] ? dp[i - 1] + data[i] : dp[i - 1];

			printf("dp[%d] --> %d \n", i, dp[i]);
	}

	dp[n] = data[n] + dp[n - 1];
	printf("%d", dp[n]);

}
