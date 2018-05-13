#include<iostream>
#include<algorithm>
#include<cstring>
#include<functional>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	IOFAST();
	int i, n, min = 10000, result = 0;
	int*a, *b;
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (i = 0; i < n; i++)
		cin >> *(a + i);
	for (i = 0; i < n; i++)
		cin >> *(b + i);
	sort(a, a + n);
	sort(b, b + n, greater<int>());

	for (i = 0; i < n; i++){
		result += a[i] * b[i];
	}
	
	cout << result;

	return 0;

}