#include<stdio.h>

int main(){
	int A, B, C, second=0;
	scanf_s("%d %d %d", &A, &B, &C);
	if (A > B){
		if (B > C)	second = B;
		else second = C;
	}
	else {
		if (A>C)	second = A;
		else second = C;
	}
	printf(second);
	/*int score;
	scanf("%d", &score);
	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");*/
}