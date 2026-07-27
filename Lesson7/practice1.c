// キーボードから5人分のテストの1番目の人の点数は〇点です。点数を入力させ、最高点を出力する

#include <stdio.h>
#define NUM 5

int main(void){
	int str[NUM];
	int i, j;
	int max;

	printf("テストの点数を入力してください。\n");
	for(i = 0; i < NUM; i++){
		scanf("%d", &str[i]);
	}

	// 入力された点数から最大値を求める
	max = str[0];
	for(i = 1; i < NUM; i++){
		if(str[i] > max){
			max = str[i];
		}
	}

	// 入力された点数を入力された順番に表示
	for(j = 0; j < NUM; j++){
		printf("%d番目の人の点数は%d点です。\n", j+1, str[j]);
	}

	// 最高点を表示
	printf("最高点は%d点です。\n", max);

	return 0;
}

/*	解答例
int main(void){
	int test[NUM];
	int max = 0;
	int i, j;

	printf("テストの点数を入力してください。\n");
	for(i = 0 ; i< NUM; i++){
		scanf("%d", &test[i]);

		if(max < str[i]){
			max = str[i];
		}
	}

	for(j = 0; j < NUM; j++){
		printf("%d番目の人の点数は%d点です。\n", j+1, str[j]);
	}

	printf("最高点は%d点です。\n", max);

	return 0;
 */
