// キーボードから2つの整数値を入力させ、2値が同じか、大小を判定する

#include <stdio.h>

int main(void)
{
	int res1, res2;

	printf("2つの整数を入力してください。\n");
	scanf("%d", &res1);
	scanf("%d", &res2);

	if(res1 == res2){
	       printf("2つの数は同じです。\n");
	}
	else if(res1 > res2){
		printf("%dより%dのほうが大きい値です。\n", res2, res1);
	}
	else if(res1 < res2){
		printf("%dより%dのほうが大きい値です。\n", res1, res2);
	}

	return 0;
}

