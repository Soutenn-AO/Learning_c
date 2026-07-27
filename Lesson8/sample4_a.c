// 実引数を変数の値とする

#include <stdio.h>
#define NUM 3

// buy関数の定義
void buy(int x)
{
	printf("%d万円の車を買いました。\n",x);
}

// buy関数の呼び出し
int main(void)
{
	int num = 0;
	int i;

	for(i = 1; i < 4; i++){
		printf("%d台目はいくらの車を買いますか？\n", i);
		scanf("%d", &num);
		buy(num);
	}

	return 0;
}
