// switch文中でbreak文を使う

#include <stdio.h>

int main(void)
{
	int res;

	do{
		printf("成績を入力してください。(1~5)\n");
		scanf("%d", &res);

		switch(res){
			case 1:
			case 2:
				printf("もう少し頑張りましょう。\n");
				break;
			case 3:
			case 4:
				printf("この調子で頑張りましょう。\n");
				break;
			case 5:
				printf("たいへん優秀です。\n");
				break;
			default:
				printf("1~5までの成績を入力してください。\n");
				break;	
		}
	}while(res < 1 || res > 5);

	return 0;
}
