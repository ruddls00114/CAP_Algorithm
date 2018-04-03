	#include<iostream>
	#include<cstring>
	#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#include<algorithm>

void mergeSort(int* arr, int first, int last);
void merge(int* arr, int first,int middle, int last);

int temp[1000001];

	int main(){

		int n, i;
		scanf("%d", &n);
		int* arr = new int[n];
		for (i = 0; i < n; i++)	
			scanf("%d", arr+i);
		
		mergeSort(arr, 0, n - 1);

		for (i = 0; i < n; i++)
			printf("%d \n", *(arr + i));

	}
	void mergeSort(int* arr, int first, int last){
		int middle = (first + last) / 2;
		if (first < last){
			mergeSort(arr, first, middle);
			mergeSort(arr, middle + 1, last);
			merge(arr, first, middle, last);
		}
	}
	void merge(int* arr, int first, int middle, int last){
		int i, j, k = first , p;
		i = first;	//앞덩어리의 시작
		j = middle + 1;//뒷더엉리의 시작

		while (i <= middle && j <= last){ //두 배열이 끝에 닿을때 까지 반복.
			temp[k] = arr[i] > arr[j] ? arr[j++] : arr[i++];
			k++;

		}
		if (i > middle){
			for (p = j; p <= last; p++){
				temp[k] = arr[p];
				k++;
			}
		}
		else if (j > last){
			for (p = i; p <= middle; p++){
				temp[k] = arr[p];
				k++;
			}
		}
		for (int m = 0; m <= last; m++){
			arr[m] = temp[m];
		}
	}