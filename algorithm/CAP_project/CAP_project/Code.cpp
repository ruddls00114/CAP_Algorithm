#include<iostream>
#include<string>
#include<cstdlib>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
	IOFAST();
	int a, b, v, end = 0, day = 0;;
	cin >> a >> b >> v;
	v = v - b;
	day = v % (a - b) ? v / (a - b) + 1 : v / (a - b) ;
	cout << day;
	return 0;
}