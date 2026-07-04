// キーボードから整数値を入力させ、奇数か偶数かを判定するプログラム

#include <stdio.h>

int main(void)
{
	int res;

	printf("整数を入力してください。\n");
	scanf("%d", &res);

	if(res % 2 == 0){
		printf("%dは整数です。\n", res);
	}
	else{
		printf("%dは奇数です。\n", res);
	}

	return 0;
}
