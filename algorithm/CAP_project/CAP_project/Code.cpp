#include<iostream>

using namespace std;
//10950 입력이 주어짐 
//void main(){
//
//	int testcase;
//	int a, b;
//	cin >> testcase;
//
//	for (int i = 1; i <= testcase; i++){
//		cin >> a >> b;
//		cout << a + b << endl;
//	}
//}

////10951 입력이 주어지지암ㄶ음 
//void main(){
//
//	int a, b;
//
//	while ()//....
//	{
//		cin >> a >> b;
//		cout << a + b << endl;
//	}
//}
//10952 입력이 0 0 이면 종료
void main(){

	int a, b;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a + b << endl;
	}
}

