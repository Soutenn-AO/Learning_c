// 正負を反転する

#include <stdio.h>

int main(void)
{
	int num;

	printf("整数を入力してください。\n");
	scanf("%d", &num);

	num = -num;

	printf("正負を反転すると%dです。\n", num);

	return 0;
}	

