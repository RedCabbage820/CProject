#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>














int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");

	int choice;
	//while(1) �ȿ� �ڵ带 �۾��ϸ� ��� �ݺ��˴ϴ�.
	while (1)
	{
		printf("0. ������\t1. �α���\t2. ȸ������");
		scanf("%d", &choice); //�Է��� ������ ���, �Է� �������� ��� ���°� �˴ϴ�.
		system("cls"); //�ش� ��ɾ �ۼ��ϸ� �ܼ� â�� �������ϴ�.
		if (choice == 0)
		{
			exit(0); //���α׷��� �����ϴ� �ڵ�
		}
		if (choice == 1)
	}
	return 0;
}