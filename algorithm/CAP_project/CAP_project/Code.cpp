#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min(a,b) a<b?a:b
using namespace std;
int dp[4][1002];
int data[4][1002];

int main(){
	int i, j, n, min;
	//memset(data[],-1, sizeof(data));
	//memset(dp, 0, sizeof(dp));

	cin >> n;
	for (j = 1; j <= n; j++){
		for (i = 1; i <= 3; i++){
			cin >> data[j][i];
		}
	}
	for (j = 1; j <= n; j++){
		if (j == 1){
			dp[j][1] = data[j][1];
			dp[j][2] = data[j][2];
			dp[j][3] = data[j][3];
			continue;
		}
		dp[j][1] = min(dp[j - 1][2] + data[j][1], dp[j - 1][3] + data[j][1]);
		dp[j][2] = min(dp[j - 1][1] + data[j][2], dp[j - 1][3] + data[j][2]);
		dp[j][3] = min(dp[j - 1][1] + data[j][3], dp[j - 1][2] + data[j][3]);

	}


	for (j = 1; j <= n; j++){
		for (i = 1; i <= 3; i++){
			cout << dp[j][i] << " ";
		}
		cout << endl;
	}
	min = min(min(dp[n][1], dp[n][2]), dp[n][3]);
	cout << min;
}