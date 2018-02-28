#include<iostream>
using namespace std;

int main(){
	//10818 - 최소최대
	int n, input, min = 1000000, max = -1000000;
	cin >> n;
	while (n--)
	{
		cin >> input;
		if (input < min)
			min = input;
		if (input>max)
			max = input;
	}
	cout << min << ' ' << max << endl;
}