#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int gcd(int h, int l);
int main(){
	int t, h, l, q1, q2;
	int gcdNum,tmp;
	int* arr;
	cin >> t;
	arr = new int[t];
	for (int i = 0; i < t; i++){
		cin >> arr[i];
	}
	for (int i = 1; i < t; i++){
		h = arr[0];
		l = arr[i];
		//if (h < l){
		//	tmp = h;
		//	h = l;
		//	l = tmp;
		//}
		gcdNum = gcd(h, l);
		//q1 = arr[0]/gcdNum;		q2 = arr[i]/gcdNum;
		cout << arr[0] / gcdNum << "/" << arr[i] / gcdNum << endl;

	}
}
int gcd( int h, int l){
	int r;
	do{
		r = h%l;
		h = l;
		l = r;
	} while (r != 0);
	return h;
}