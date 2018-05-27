#include<iostream>
#include<string>
#include<cstdlib>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int arr[9];
int main(){
	IOFAST();
	
	int n, i, j, sum  ;
	for (j = 0; j < 3; j++){
		sum = 0;
		for (i = 0; i < 4; i++){
			cin >> n;
			sum += n;
		}

		switch (sum){
		case 0: cout << "D\n"; break;
		case 1: cout << "C\n"; break;
		case 2: cout << "B\n"; break;
		case 3: cout << "A\n"; break;
		case 4: cout << "E\n"; break;
		}
	}
	return 0;

}