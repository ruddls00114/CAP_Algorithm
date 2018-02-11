#include<stdio.h>
//별찍기 함수 
// N은 항상 3*2^k
//재귀함수 이용


char arr[6000][6200];
void printstar();
int main(){

	int n, i, j;
	scanf("%d", &n);
	//배열초기화
	//각 요소들을 공백으로 초기화. 행의 끝 부분만 null로. ....?
	for (i = 0; i < n; i++){
		for (j = 0; j < 2 * n; j++){
			if (j == 2 * n - 1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}

	}

	printstar(n, n - 1, 0); //제일 위의 *의 좌표

	for (i = 0; i < n; i++){
		for (j = 0; j < 2 * n - 1; j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}
void printstar(int n, int x, int y){
	if (n == 3){ //printstar(3,2,0)
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';

		return;
	}

	//printstar(n / 2, n - 1, 0);
	//printstar(n / 2, (n/2) - 1, n/2);
	//printstar(n / 2, 2*n-(n/2+1), n/2); 
	printstar(n / 2, x, y); 
	printstar(n / 2, x - (n / 2), y + (n / 2));
	printstar(n / 2, x + (n / 2), y + (n / 2));
}


