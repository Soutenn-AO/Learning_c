// 論理演算子を使って条件を記述する

#include <stdio.h>

int main(void)
{
	char res;

	printf("あなたは男性ですか？\n");
	printf("YまたはNを入力してください。\n");

	res = getchar();

	if(res == 'Y' || res == 'y'){
		printf("あなたは男性ですね。\n");
	}
	else if(res == 'N' || res == 'n'){
		printf("あなたは女性ですね。\n");
	}
	else{
		printf("YまたはNを入力してください。\n");
	}

	return 0;
}
