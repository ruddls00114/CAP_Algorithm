#include<iostream>

using namespace std;
//10950 �Է��� �־��� 
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

////10951 �Է��� �־������Ϥ��� 
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
//10952 �Է��� 0 0 �̸� ����
void main(){

	int a, b;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a + b << endl;
	}
}

