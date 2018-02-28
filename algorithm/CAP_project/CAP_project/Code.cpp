#include<iostream>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	//10039 - Æò±ÕÁ¡¼ö
	int n = 5,input,sum=0;
	while (n--){
		cin >> input;
		if (input < 40) input = 40;
		sum += input;
	}
	cout << (sum / 5);

}