// キーボードから文字列を入力させ、文字列にいくつ「a」という文字が含まれるかを調べる

#include <stdio.h>

int main(void)
{
	char str[100];
	int i;
	int c = 0;

	printf("文字列を入力してください。\n");
	scanf("%s", str);

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == 'a'){
			c++;
		}
	}

	printf("%sの中にaは%d個あります。\n", str, c);

	return 0;
}

