#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long int gcd(long long int h, long long int l);
int main(){
	long long int arr[2], gcdNum;
	int i;
	for (i = 0; i < 2; i++){
		cin >> arr[i];
	}
	gcdNum = gcd(arr[0], arr[1]);
	for (i = 1; i <= gcdNum; i++){
		cout << "1";
	}
}
long long gcd(long long int h, long long int l){
	long long int r, tmp;
	if (h < l){
		tmp = h;
		h = l;
		l = tmp;
	}
	do{
		r = h%l;
		h = l;
		l = r;
	} while (r != 0);
	return h;
}