#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>














int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

	int choice;
	//while(1) 안에 코드를 작업하면 계속 반복됩니다.
	while (1)
	{
		printf("0. 나가기\t1. 로그인\t2. 회원가입");
		scanf("%d", &choice); //입력을 진행할 경우, 입력 전까지는 대기 상태가 됩니다.
		system("cls"); //해당 명령어를 작성하면 콘솔 창이 지워집니다.
		if (choice == 0)
		{
			exit(0); //프로그램을 종료하는 코드
		}
		if (choice == 1)
	}
	return 0;
}