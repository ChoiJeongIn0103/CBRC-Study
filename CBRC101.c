#include <stdio.h>
#define N 5
int main(void)
{
	int num[N];
	int cor = 0;
	int a = 0;
	int i = 0;

	for(i = 0; i < N; i++) {
		printf("%d번째 정수를 입력하시오 : ", i+1);
		scanf("%d", &num[i]);
	}

	printf("정수를 입력하시오 : ");
	scanf("%d", &a);

	for(i = 0; i < N; i++) {
		if(a == num[i])
			cor += 1;
	}

	printf("배열에 있는 %d의 개수는 %d개 입니다.\n", a, cor);

	return 0;
}
