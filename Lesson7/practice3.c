// キーボードから文字列を入力させ、文字列の長さを調べるコード

#include <stdio.h>
#define NUM 100

int main(void)
{
	char str[NUM];
	int i;
	int c = 0;

	printf("文字列を入力してください。\n");
	scanf("%s", str);

	for(i = 0; str[i] != '\0'; i++){
		c++;
	}

	printf("文字列の長さは%dです。\n", c);

	return 0;
}
