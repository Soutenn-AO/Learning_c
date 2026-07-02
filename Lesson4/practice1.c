// 計算結果を出力する

#include <stdio.h>

int main(void){
	int num1, num4;
	double num2, num3, num5;

	num1 = 0-4;
	num2 = 3.14*2;
	num3 = 5/3;
	num4 = 30%7;
	num5 = (7+32)/(double)5;

	printf("0-4=%d\n", num1);
	printf("3.14*2=%f\n", num2);
	printf("5/3=%f\n", num3);
	printf("30%%7=%d\n", num4);
	printf("(7+32)/5=%f\n", num5);

	return 0;
}
