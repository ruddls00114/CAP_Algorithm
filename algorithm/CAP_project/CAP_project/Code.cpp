//#include<iostream>
//#include<cstring>
//#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#include<algorithm>
//
//using namespace std;
//int dp[10001];// 해빈이가 얻을 수 있는 최대 수익
////int p[10001];
//
//
//int main(){
//
//	int n, i,j;
//	scanf("%d", &n);
//	int* p = new int[n+1];
//	int* dp = new int[n + 1];
//	memset(p, 0, sizeof(p));
//	memset(dp, 0, sizeof(dp));
//	for (i = 1; i <= n; i++){
//		scanf("%d", p+i);
//		dp[i] = p[i];		
//	}
//	/*
//	for (j = 2; j <= n; j++){
//		for (i = 2; i <= j; i++){
//			dp[j] = max(dp[j],(dp[i - 1] + dp[j - i + 1]));
//		}
//	}
//*/
//	for (j = 2; j <= n; j++){
//		for (i = 2; i <= j; i++){
//			dp[j] = max(dp[j], (dp[i - 1] + dp[j - i + 1]));
//		}
//	}
//
//	printf("%d", dp[n]);
//}
#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>

using namespace std;

int main(){

	int n, i, j;
	scanf("%d", &n);
	int* dp = new int[n + 1];
	memset(dp, 0, sizeof(dp));
	for (i = 1; i <= n; i++){
		scanf("%d", dp + i);

	}

	for (j = 2; j <= n; j++){
		for (i = 2; i <= j; i++){
			dp[j] = max(dp[j], (dp[i - 1] + dp[j - i + 1]));
		}
	}

	printf("%d", dp[n]);
}