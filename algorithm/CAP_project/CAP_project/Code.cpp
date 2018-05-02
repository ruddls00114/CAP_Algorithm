#include<iostream>
#include<cstring>
#include<algorithm>

#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
int main(){
	IOFAST();
	int t, i, j;
	int a, b;
	cin >> t;
	for (i = 0; i < t; i++){
		int n, k, w;
		cin >> n >> k;
		int * d = new int[n + 1];
		int * dp = new int[n + 1];
		memset(dp, 0, sizeof(dp));

		for (j = 1; j <= n; j++){
			cin >> d[j];
			dp[j] = d[j];
		}

		for (j = 1; j <= k; j++){
			int temp;
			cin >> a >> b;
		/*	if(a>b){
				temp = a;
				a = b;
				b = temp;
			}*/
			dp[b] = max((dp[a] + d[b]), dp[b]);
		}
		cin >> w;
		cout << dp[w] << '\n';

	}//for t

	return 0;
}