// タブ(\t)を使って、九九の表を画面に出力する

#include <stdio.h>

int main(void)
{
	int i, j;

	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			printf("%d\t", i*j);
		}
		printf("\n");
	}

	return 0;
}
