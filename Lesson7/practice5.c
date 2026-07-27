// キーボードから文字列を入力させ、文字列中の「a」という文字を「b」に置き換える

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
			str[i] = 'b';
		}
	}

	printf("%sに置き換えました。\n", str);

	return 0;
}
