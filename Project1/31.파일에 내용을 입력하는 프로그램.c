#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. ���� ������ �ۼ�
	FILE* fp = NULL;

	//2. ���Ͽ� �Է��� �����Ϳ� ���� ����
	char name[20];
	int age;
	double height;

	//fp = fopen("user_info.txt", "w");

	////3. ���� ���� üũ
	//if (fp == NULL)
	//{
	//	printf("failed file open....\n");
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d��° ������ ������ �Է����ּ��� (����, �̸�, Ű) : ", i + 1);
	//	scanf("%d %s %f", &age, name, &height);

	//	//���Ͽ� ����� �ϴ� ����(fprintf)
	//	fprintf(fp, "%d %s %d\n", age, name, height);
	//}
	////4. �۾� ����
	//fclose(fp);


	//���� ���� �غ���
	fp = fopen("user_info.txt", "r");

	if (fp == NULL)
	{
		printf("���� �б� ����");
	}
	printf("=======================================\n");
	printf("��ȣ\t����\t�̸�\tŰ\n");
	printf("=======================================\n");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, "%d %s %fl", &age, name, &height);
		printf(fp, "%2d\t%2d\t%4s\t%3.2lf\n", age, name, height);
	}
	printf("=======================================\n");
	//\t : b ���
	//%2d : ���� 2ĭ , %4s : ���� 4ĭ %3.21f ���� 3ĭ, �Ҽ��� 2�ڸ�

	//fprint�� ���Ͽ� �Է��� ������ ������ִ� ����Դϴ�.(���Ϸκ����� ���)
	//fscanf�� ���Ͽ� �ִ� ������ �Է����ִ� ����Դϴ�.(���Ϸκ����� �Է�)

	return 0;
}