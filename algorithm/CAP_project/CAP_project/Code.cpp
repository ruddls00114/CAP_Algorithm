#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dp[2][1000];//dp[0][]->가장큰값 / dp[1][]->합

int main(){
	int n, v, temp = -1;
	memset(dp, -1, sizeof(dp));
	cin << n;
	for (int j = 0; i < n; j++){
		for (int i = 0; i < 2; i++){
			if (i == temp)	break;
			cin << v;
			if (v>dp[0][i])	{
				dp[0][i] = v;
				temp = i;
			}
		}
		dp[1][j] += dp[0][j];
	}
}