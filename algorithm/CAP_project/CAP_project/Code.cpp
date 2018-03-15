#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>

using namespace std;


int main(){

	int n, k, minNum = 0;
	scanf("%d %d", &n, &k);
	int* d = new int[n+1];
	for (int i = 1; i <= n; i++){
		scanf("%d", d + i);
	}
	for (int i = n; i >= 1; i--){
		if (d[i]>k) continue;
		else {  //d[i]<=k
			minNum = minNum + (k / d[i]);
			k = k % d[i];
			printf("%d , %d ,%d \n", i, k, minNum);
			if (k == 0) break;

		}
		// while (d[i]<= k){
		// 	k = k - d[i];
		// 	minNum++;
		// 	printf("%d , %d \n", i, k);
		// 	if (k == 0) break;
		// }
	}
	printf("%d", minNum);

}