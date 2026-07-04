// 入力した数までの合計を求める

#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;
	int i;

	printf("いくつまでの合計を求めますか？\n");
	scanf("%d", &num);

	for(i=1; i<=num; i++){
		sum += i;
	}

	printf("1から%d番目までの合計値は%dです。\n", num, sum);

	return 0;
}
