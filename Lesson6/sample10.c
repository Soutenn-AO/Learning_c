// break文でブロックから抜ける

#include <stdio.h>

int main(void){
	int i, res;

	printf("何番目でループを中止しますか？(1~10)\n");
	scanf("%d", &res);

	for(i=1; i<=10; i++){
		printf("%d番目の処理です。\n", i);
		if(i == res){
			break;
		}
	}

	return 0;
}	
