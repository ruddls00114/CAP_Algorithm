	#include<iostream>
	#include<cstring>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#include<algorithm>

	int main(){

		int n,flag, i,j,tm;
		scanf("%d", &n);
		int* arr = new int[n];
		for (i = 0; i < n; i++)	
			scanf("%d", arr+i);
		//버블정렬
		for (j = 0; j < n; j++){
			flag = 0;
			for (i =1; i < n - j; i++){
				if (arr[i - 1] >= arr[i]){
					tm = arr[i - 1];
					arr[i - 1] = arr[i];
					arr[i] = tm;
					flag = 1;
				}
			}
			if (flag == 0) break;
		}
		/* //삽입정렬
		for (i = 1; i < n; i++){		
			key = arr[i];
			for (j = i - 1; j >= 0; j--){ 
				if (arr[j] <= key)	break;
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = key;
		} */
		for (i = 0; i < n; i++)	
			printf("%d \n", *(arr + i));

	}
