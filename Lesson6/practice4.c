// 底辺が5、高さが5の直角三角形を出力する

#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			printf("*");
			if(i == j)
				break;
		}
		printf("\n");
	}

	return 0;
}
