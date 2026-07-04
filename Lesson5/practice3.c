// キーボードから整数値を入力させ、値が0~10の場合は正解、それ以外の場合は間違いと判定する

#include <stdio.h>

int main(void)
{
	int res;

	printf("0から10までの整数を入力してください。\n");
	scanf("%d", &res);

	if(res >= 0 && res <= 10){
		printf("正解です。\n");
        }
	else{
		printf("間違いです。\n");
	}

	return 0;
}
