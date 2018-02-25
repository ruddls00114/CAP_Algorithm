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
////10952 입력이 0 0 이면 종료
//void main(){
//
//	int a, b;
//
//	while (1)
//	{
//		cin >> a >> b;
//		if (a == 0 && b == 0) break;
//		cout << a + b << endl;
//	}
//}
//
//10953 testcase주어짐 /입력 사이에 , 
//int main(){
//	int tc;
//	int a, b;
//	cin >> tc;
//	while ( tc-- )
//	{
//		//cin >> a >> b;
//		scanf("%d , %d", &a, &b);
//		cout << a + b << endl;
//	}
//}

//int main(){
//	int i,n,sum=0;
//	cin >> n;
//	for(i = 1; i <= n; i++){
//		sum += i;
//	}
//	cout << sum;
//}
int main(){
	int n, input,min = 1000000, max = -1000000;
	cin >> n;
	while (n--)
	{
		cin >> input;
		if (input > min){
			if (input > max)
				max = input;
		}
		else{
			min = input;
		}
	}
		cout << min <<' '<< max << endl;
}


//int input[100];
//int main(){
//	int  n, input, min = 0, max = 0;
//	cin >> n;
//	while (n--)
//	{
//		cin >> input[n];
//	}
//	if (int i = n; i >= 0;i--){
//		if (input[i] > min){
//			if (input[i] > max)
//
//				max = input;
//		}
//		else{
//			min = input;
//		}
//	}
//	cout << min << ' ' << max << endl;
//}
//
//
