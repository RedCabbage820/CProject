#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>














int main()
{
	FILE* fp = NULL;

	char idname[20];
	char idpasswd[8];

	fp = fopen("program_data.txt", "w");

	if (fp == NULL)
	{
		printf("failed file open....\n");
	}

	for (int i = 0; i < 1; i++)
		{
			printf("������ ������ �Է����ּ��� (ID, PW) : ", i + 1);
			scanf("%d %s", idname, idpasswd);

			printf("���� ������ ���� ��ϵǾ����ϴ�.");
			fprintf(fp, "%d %s\n", idname, idpasswd);
	int choice;
	//while(1) �ȿ� �ڵ带 �۾��ϸ� ��� �ݺ��˴ϴ�.
	while (1)
	{
		printf("0. ������\t1. �α���");
		scanf("%d", &choice); //�Է��� ������ ���, �Է� �������� ��� ���°� �˴ϴ�.
		system("cls"); //�ش� ��ɾ �ۼ��ϸ� �ܼ� â�� �������ϴ�.
		if (choice == 0)
		{
			exit(0); //���α׷��� �����ϴ� �ڵ�
		}
		if (choice == 1)
		{
			printf("������ ������ �Է����ּ��� (ID, PW) : ");
			scanf("%d %s", idname, idpasswd);
			fp = fopen("sample.txt", "r");
		}
	}
	return 0;
}