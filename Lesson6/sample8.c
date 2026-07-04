// for文をネストする

#include <stdio.h>

int main(void){
	int i, j;

	for(i=0; i<=4; i++){
		for(j=0; j<=2; j++){
			printf("iは%d:jは%d\n", i, j);
		}
	}

	return 0;
}
