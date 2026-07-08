// 文字列を出力する

#include <stdio.h>

int main(void)
{
	char str[6];

	str[0] = 'H';
	str[1] = 'E';
	str[2] = 'L';
	str[3] = 'L';
	str[4] = 'O';
	str[5] = '\0';

	printf("%sは文字列です。\n", str);

	return 0;
}
