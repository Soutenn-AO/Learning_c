// 整数を入力して、正方形の面積を出力するコード

#include <stdio.h>

int main(void)
{
	int num;

	printf("正方形の辺の長さを入力してください。\n");
	scanf("%d", &num);

	printf("正方形の面積は%dです。\n", num*num);

	return 0;
}
