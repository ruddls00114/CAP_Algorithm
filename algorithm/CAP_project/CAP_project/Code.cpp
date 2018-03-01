#include<iostream>
#include<string>
#include<array>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool arr(int a[], int b[]);
int main(){

	//2029- À½°è
	int i=0,a[8], b[] = { 1, 2, 3, 4, 5, 6, 7, 8 }, c[] = {8,7,6,5,4,3,2,1};
	string temp="";
	for (i = 0; i < 8; i++){
		cin >> a[i];
	}
	if (arr(a, b)) cout << "ascending";
	else if (arr(a, c)) cout << "descending";
	else cout << "mixed";
}

bool arr(int a[], int b[]){

	int i = 0;
	//if (a.size() != b.size())	return false;
	while (i< 8){
		if (a[i] != b[i]){
			break;
		}
		i++;
	}
	if (i == 8) return true;
	else return false;
}