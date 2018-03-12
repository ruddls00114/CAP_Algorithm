#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>

using namespace std;


int main(){

	int n, k, i, j;
	cin >> n >> k;
	int* dp = new int[k + 1];
	int* values = new int[n + 1];
	memset(dp, 0, sizeof(dp));
	memset(values, 0, sizeof(values));
	for (i = 1; i <= n; i++){
		cin >> values[i];
	}
	dp[1] = 1;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= k; j++){
			if (j >= values[i])
				dp[j] +=dp[j-values[i-1]];
		}
	}
	cout << dp[k] << endl;
}