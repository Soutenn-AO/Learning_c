// キーボードからテストの点数を入力させ、その合計点を出力する
// 最後に答えを出力させる場合は0を入力する

#include <stdio.h>

int main(void)
{
	int res = 0;
	int sum = 0;

	printf("テストの点数を入力してください。(0で終了)\n");
		
	do{
		scanf("%d", &res);
		sum += res;
	}while(res != 0);

	printf("テストの合計点は%d点です。\n", sum);

	return 0;
}
