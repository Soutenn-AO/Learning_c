// 高さと底辺を入力して、三角形の面積を出力するコード

#include <stdio.h>

int main(void)
{
	int height;	// 高さ
	int length;	// 底辺
	
	printf("三角形の高さを入力してください。\n");
	scanf("%d", &height);

	printf("三角形の底辺を入力してください。\n");
	scanf("%d", &length);

	printf("三角形の面積は%fです。\n", (height*length)/(double)2);

	return 0;
}

