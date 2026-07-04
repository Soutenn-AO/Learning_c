// 慣用的な条件を使う

#include <stdio.h>

int main(void)
{
	int num = 1;

	while(num){	// numが0であるとき繰り返しが終了する
		printf("整数を入力してください。(0で終了)\n");
		scanf("%d", &num);
		printf("%dが入力されました。\n", num);
	}
	printf("繰り返しが終わりました。\n");

	return 0;
}
