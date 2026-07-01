// sizeof演算子を使う

#include <stdio.h>

int main(void){
	int a = 1;
	int b = 0;

	printf("short int型のサイズは%ldバイトです。\n", sizeof(short int));
	printf("int型のサイズは%ldバイトです。\n", sizeof(int));
	printf("long int型のサイズは%ldバイトです。\n", sizeof(long int));
	printf("float型のサイズは%ldバイトです。\n", sizeof(float));
	printf("double型のサイズは%ldバイトです。\n", sizeof(double));
        printf("long double型のサイズは%ldバイトです。\n", sizeof(long double));
	printf("変数aのサイズは%ldバイトです。\n", sizeof(a));
	printf("式a+bのサイズは%ldバイトです。\n", sizeof(a+b));

	return 0;
}	
