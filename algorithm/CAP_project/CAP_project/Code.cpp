	#include<iostream>
	#include<string>
	#include<array>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	using namespace std;
	/*
	DP 예 피보나치수열 
	*/
	//1.반복문
	int main(){
		int n, v[46];
		for (int i = 0; i <= 45; i++){
			if (i == 0 || i == 1)v[i] = i;
			else{
				v[i] = v[i - 1] + v[i - 2];
			}
		}
		cin >> n;
		cout << v[n];
	}}
	
