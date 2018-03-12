#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>

using namespace std;
int dp[501][501], data[501][501];

int main(){
	/*
	5
	7
	3 8         //10 15
	8 1 0       //18 16 8
	2 7 4 4     //
	4 5 2 6 5   //
	*/
	int n, maxNum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			cin >> data[i][j];
		}
	}
	dp[1][1] = data[1][1];
	for (int i = 2; i <= n; i++){
		for (int j = 1; j <= i; j++){
			dp[i][j] = data[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);

		}
	}
	for (int i = 1; i <= n; i++){
		maxNum = max(maxNum, dp[n][i]);
	}
	cout << maxNum;
}