#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>

using namespace std;
int dp[10001];// 해빈이가 얻을 수 있는 최대 수익
int data[10001];

//void f(int n){
//	int i;
//	for (i = n; i >= 2; i++){
//		dp[n] = max(dp[n], data[i - 1] + data[n - i + 1]);
//	}
//}


int main(){

	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		scanf("%d", data+i);
		dp[i] = data[i];
	}

	//printf("%d", dp[2]);
	for (i = 2; i <=n; i++){
		dp[n] = max(dp[n], (data[i - 1] + data[n - i + 1]));
	}

	printf("%d", dp[n]);
}