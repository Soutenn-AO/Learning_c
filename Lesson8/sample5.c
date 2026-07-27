// 複数の引数を持つ関数を使う

#include <stdio.h>

// buy関数の定義
void buy(int x, int y)
{
	printf("%d万円と%d万円の車を買いました。\n", x, y);
}

// buy関数の呼び出し
int main(void)
{
	int num[2];
	int i;

	for(i=0; i<2; i++){
		printf("いくらの車を買いますか？\n");
		scanf("%d", &num[i]);
	}

	buy(num[0], num[1]);

	return 0;
}

