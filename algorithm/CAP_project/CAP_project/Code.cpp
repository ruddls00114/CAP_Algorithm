#include<iostream>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long int a[91];
int main(){
	IOFAST();
	int n, i;
	cin >> n;
	a[1] = 1;
	for (i = 2; i <= n; i++){
		a[i] = a[i - 1] + a[i-2];
	}

	cout << a[n];
	return 0;

}