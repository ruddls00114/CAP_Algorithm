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

	int n, i,re=0;
	scanf("%d", &n);
	int* data = new int[n+1];
	memset(data, 0, sizeof(data));
	for (i = 1; i <= n; i++)
		scanf("%d", data+i);

	dp[1] = data[1];
	dp[2] = data[1] + data[2];
	//1 2 3 4 5 6  dp[n]은 max(data[n]+dp[n-3]+data[n-1] , data[n]+dp[n-2])
	//1 3 5 8 10
	for (i = 3; i <= n; i++){

		dp[i] = max(data[i] + dp[i - 3] + data[i - 1], data[i] + dp[i - 2]);

		//if (dp[i - 1] + data[i] > dp[i - 1] + data[i + 1] && re!=3){	//연속
		//	dp[i] = dp[i - 1] + data[i];
		//	re++;
		//}
		//else{
		//	dp[i] = dp[i - 1];
		//	re = 0;
		//}
			printf("dp[%d] --> %d \n", i, dp[i]);
	}

	//dp[n] = max(dp[n - 1] + data[n], dp[n - 2] + data[n]);
	printf("%d", dp[n]);

}
