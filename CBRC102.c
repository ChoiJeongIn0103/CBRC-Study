#include <stdio.h>
#define N 5
int main(void)
{
	int num[N];
	float avg=0;
	int i = 0;
	int sum = 0;
	int max = 0;

	for(i = 0; i < N; i++) {
		printf("%d번째 점수 입력 : ", i+1);
		scanf("%d", &num[i]);
	}


	for(i = 0; i < N; i++) {
		sum += num[i];

		if(max > num[i])
			max = max;
		else if(max <= num[i])
			max = num[i];
	}

	avg = (float)sum / (float)N;
	printf("평균점수 : %.2f, 최고점수 : %d\n", avg, max);

	return 0;
}

