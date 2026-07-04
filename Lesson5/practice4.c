// キーボードから文字を入力させ、A,B,Cの場合は正解、それ以外の場合は間違いと判定する

#include <stdio.h>

int main(void){
	char res;

	printf("A~Cまでの文字を入力してください。\n");
	res = getchar();

	if(res == 'A' || res == 'a'){
		printf("正解です。\n");
	}
	else if(res == 'B' || res == 'b'){
		printf("正解です。\n");
	}
	else if(res == 'C' || res == 'c'){
		printf("正解です。\n");
	}
	else{
		printf("間違いです。\n");
	}

	return 0;
}
