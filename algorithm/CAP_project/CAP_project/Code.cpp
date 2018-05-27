#include<iostream>
#include<string>
#include<cstdlib>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
	IOFAST();
	int n, cnt = 0 ,k =500,flag=0;// flag =0 -> 5%%, 1 ->1&&
	cin >> n;
	n = 1000 - n;
	while (n > 0){
		cnt += n / k;
		n -= (n / k)*k;
		if (flag == 0) {
			k /= 5; flag = 1;
		}
		else {
			k /= 2; flag = 0;
		}
	}
	cout << cnt;
	return 0;
}