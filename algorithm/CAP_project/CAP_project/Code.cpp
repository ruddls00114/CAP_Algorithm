#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define min(a,b) a<b?a:b;
#include<algorithm>

using namespace std;
//20180308 1로만들기
//
//X가 3으로 나누어 떨어지면, 3으로 나눈다.
//X가 2로 나누어 떨어지면, 2로 나눈다.
//1을 뺀다.
//정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다.
//연산을 사용하는 횟수의 최소값을 출력하시오.

//top-down 사용하기
int dp[1000001];
int f(int n){
	if (n == 0 || n == 1) return 0;
	if (dp[n])
		return dp[n];
	else
		return dp[n] = min(min(f(n / 3) + (n % 3 * 10) + 1, f(n / 2) + (n % 2 * 10) + 1), f(n - 1) + 1);

}

int main(){
	int n; 
	scanf("%d", &n);
	dp[1] = 0;
	f(n);
	printf("%d\n",dp[n]);
}