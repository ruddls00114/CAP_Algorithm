#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>
using namespace std;
//20180308 1로만들기
//
//X가 3으로 나누어 떨어지면, 3으로 나눈다.
//X가 2로 나누어 떨어지면, 2로 나눈다.
//1을 뺀다.
//정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다.
//연산을 사용하는 횟수의 최소값을 출력하시오.

//bottom-up 사용하기
int dp[1000001];
int main(){
	int n; 
	scanf("%d", &n);
	dp[1] = 0;
	for (int i = 2; i <= n; i++){

		dp[i] = dp[i - 1] + 1;	//1 뺀 경우 

		if (i % 3==0) {
			dp[i] = min(dp[i / 3] + 1, dp[i]); 
		}
		if (i % 2==0){
			dp[i] = min(dp[i / 2] + 1, dp[i]);

		}
	}
	printf("%d\n", dp[n]);
}