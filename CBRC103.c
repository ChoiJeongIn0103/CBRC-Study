#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 1000000

void push(int input);
void print(void);
int pop(void);
int top(void);
int empty(void);
int size(void);

int stack[STACK_SIZE];
int high = -1;

int main(void)
{
	int X;
	int peo;
	
	while(peo!=0) {
		printf("\n<<Menu>>\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. size\n");
		printf("4. empty\n");
		printf("5. top\n");
		printf("6. print\n");
		printf("0을 누르면 종료\n");
		printf("-------------------\n");

		scanf("%d", &peo);
		switch(peo)
		{
			case 1:
				printf("\n1이상 2,100,000,000이하의 정수를 입력하세요 : ");
				scanf("%d", &X);
				if(X < 1 || X > 2100000000) {
					printf("범위에 알맞지 않은 값이 입력되었습니다. 다시 시도해주세요.\n");
					break;
				}
				push(X);
				break;
			case 2:
				pop();
				break;
			case 3:
				size();
				break;
			case 4:
				empty();
				break;
			case 5:
				top();
				break;
			case 6:
				print();
				break;
		}
	}

	return 0;
}

void push(int input)
{
	stack[++high] = input;
}

void print(void)
{
	int i;

	printf("\n<STACK>\n");
	for(i = 0; i <= high; i++)
		printf("%d ", stack[i]);
	printf("\n\n");
} 

int pop(void)
{
	if(high == -1) {
		printf("-1\n");
		return 0;
	}
	printf("\n가장 위에 있는 정수는 %d 였습니다.\n", stack[high]);
	return stack[high--];
}

int top(void)
{
	if(high == -1) {
		printf("-1\n");
		return 0;
	}
	printf("\n가장 위에 있는 정수는 %d 입니다.\n", stack[high]);
	return stack[high];
}

int empty(void)
{
	if(high == -1) {
		printf("\nTrue\n");
		return 1;
	}
	else {
		printf("\nFalse\n");
		return 0;
	}
}

int size(void)
{
	printf("\n스택에 들어있는 정수의 개수는 %d 개 입니다.\n", high+1);
	return high+1;
}
