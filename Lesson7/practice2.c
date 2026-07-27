// キーボードから5人分のテストの点数を入力させ、70点以上の学生の数をカウントする

#include <stdio.h>
#define NUM 5

int main(void)
{
	int test[NUM];
	int i, j;
	int up = 0;

	printf("テストの点数を入力してください。\n");
	for(i = 0; i < NUM; i++){
		scanf("%d", &test[i]);

		if(test[i] >= 70){
			up += 1;
		}
	}

	for(j = 0; j < NUM; j++){
		printf("%d番目の人の点数は%d点です。\n", j+1, test[j]);
	}

	printf("70点以上の学生は%d人です。\n", up);

	return 0;
}
