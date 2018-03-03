#include<iostream>
#include<cstring>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

long int a[90];
int main(){
	int n;
	memset(a, 0, sizeof(a));
	cin >> n;
	a[0] = 0, a[1] = 1;
	for (int i = 2; i <= n ; i++){
		a[i ] = a[i -1] + a[i-2];
	}
	cout << a[n];
}
/*
2748 번 피보나치 수열 미완성 

//top-down
long int m[91];
int r(int i);
int main(){
	int n;
	memset(m, 0, sizeof(m));
	scanf("%d", &n);
	r(n);
	printf("%lld",m[n]);
}
int r(int i){
	if (m[i])
		return m[i];
	else if (i == 0 || i == 1)
		return m[i] = i;
	else
		return m[i] = r(i - 1) + r(i - 2);

}
*/