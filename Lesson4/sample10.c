// 異なる型の演算をする

#include <stdio.h>

int main(void){
	int d = 2;
	double pi = 3.14;

	printf("直径が%dセンチの円の円周は%fセンチです。\n", d, d*pi);

	return 0;
}
