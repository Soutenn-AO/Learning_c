// キーボードから数を入力させ、その数が素数であるかどうかを判断する

#include <stdio.h>

int main(void)
{
	int i;
	int res;

	do{
		printf("2以上の整数を入力してください。\n");
		scanf("%d", &res);

		for(i=2; i<=res; i++){
			if(i == res){
				printf("%dは素数です。\n", res);
			}
			else if((res % i) == 0){
				printf("%dは素数ではありません。\n", res);
				break;
			}
		}
	}while(res < 2);

	return 0;
}
