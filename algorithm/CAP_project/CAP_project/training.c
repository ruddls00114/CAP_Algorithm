#include<stdio.h>
//����� �Լ� 
// N�� �׻� 3*2^k
//����Լ� �̿�


char arr[6000][6200];
void printstar();
int main(){

	int n, i, j;
	scanf("%d", &n);
	//�迭�ʱ�ȭ
	//�� ��ҵ��� �������� �ʱ�ȭ. ���� �� �κи� null��. ....?
	for (i = 0; i < n; i++){
		for (j = 0; j < 2 * n; j++){
			if (j == 2 * n - 1)
				arr[i][j] = '\0';
			else
				arr[i][j] = ' ';
		}

	}

	printstar(n, n - 1, 0); //���� ���� *�� ��ǥ

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


