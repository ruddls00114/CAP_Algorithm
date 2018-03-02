	#include<iostream>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	using namespace std;
	/*
	DP 예 피보나치수열 
	*/
	//2.재귀, 메모이제이션
	int m[46];
	int r(int i);

	int main(){
		int n;
		memset(m, 0, sizeof(m));
	cin >> n;
	cout << r(n);
	}

	int r(int i){
		if (i == 0 || i == 1)
			return m[i]=i;
		else if(m[i]) 
			return m[i];
		else
			return m[i]=r(i - 1) + r(i - 2);
	}
