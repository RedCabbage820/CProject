#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main()
{
	//���忡 ���� ����(�迭)
	//�ڷ��� �迭��[] = {��1,��2,��3,...};

	//�迭�� �� �ϳ��� �迭��[���� ��ġ]�� ������ �����մϴ�.
	//���� ��ġ(�ε���)�� 0������ �迭�� ������ �� -1 ���� �մϴ�.
	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };

//[���� ȭ��]
	system("title ���� ���� �׽�Ʈ");
	printf("���� ����.\n�ʴ� �� ���� ����� �ƴ��� ������.\n\n������ ������ �� �ʴ�\n�� �ϰ� �ִ�?\n ");
	int select;
	printf("1.���� ���� �����ϱ�");
	scanf("%d", &select);
	system("cls"); //�ܼ� ȭ�� �����

//[1�� ����]
	printf("�Ͼ���� ��������\n���� ������ �ϴ��� ���δٸ�\n");
	printf("1.\"ȭâ�ѵ� ������?\"\n�� ���� ����Ѵ�.\n");
	printf("2.\"��� ���� �ϵ��� ����� ���� ���̾�!\"\n\t������ �����Ͱ�....�ɵ��� �Ǿ��...\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls");
//[2�� ����]
	printf("\t�������� ������ ��\n");
	printf("\t1. �ϴ� �� ������� ������.");
	printf("\t2. �̸� �����ص� ���ǵ��� ��� ì���.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}
	system("cls");
//[3�� ����]
	printf("\tó�� �� �� ���� ��å�� ��\n");
	printf("\t1. ������ ���� �̵��Ѵ�.");
	printf("\t2. ������ �� �� �Ȱ� �� ����.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}
	system("cls");
//[4�� ����]
	printf("\t�Ϳ��� �ٶ��㸦 �����ٸ�\n");
	printf("\t1. �ϴ� ���� �� ������� ������.");
	printf("\t2. �̸� �����ص� ���ǵ��� ������ �����Ѵ�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}
	system("cls");
//[5�� ����]
	printf("\t�ᱹ �ٶ���� �Ǻκ��� �����ȴ�.\n");
	printf("\t1. ���濡�� �ƹ��ų� ���� ���������.");
	printf("\t2. ��.��.��.��.��.��.��.��.��?");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}
	system("cls");
//[6�� ����]
	printf("\t�ΰ������� ������ ��� ���� Ż�� �´�.\n");
	printf("\t1. ������ Į���� ���� �غ� �Ѵ�.");
	printf("\t2. �� ������ �����Ѵ�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}
	system("cls");
//[7�� ����]
	printf("\t�ѿ����� ����� ��������.\n");
	printf("\t1. ��� ���̸� �������� ��� ���Ѵ�.");
	printf("\t2. �̷��� �����ϸ鼭 ���� �ִ´�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}
	system("cls");
//[8�� ����]
	printf("\t���� �ΰ� ������ �� ���� �����⸦ ������.\n");
	printf("\t1. �ΰ��� �ΰ� �� ���� �������뿡 ������.");
	printf("\t2. �ΰ��� ������.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");
//[9�� ����]
	printf("\tȯ�� ������ ���� �������� ��� ���δ�.\n");
	printf("\t1. ���� �缱�� �ȴٸ� �� �����ⰰ�� �ΰ��� �����ڽ��ϴ�.");
	printf("\t2. �ٸ� �ĺ� ���� ����ġ��.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}
	system("cls");
//[10 �� ����]
	printf("\t���� ����� ���� �ʴٸ� ���� �����ϴµ� ���� �� �´�.\n");
	printf("\t1. �����̶��.���� �����Ϸ��� �� ������ �Ǿ���.");
	printf("\t2. ��ġ���� �� ġ�� ū�� �ƴ϶� �� �´°� ��?����� ������.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}
	system("cls");
//[11�� ����]
	printf("\t�ڷ��µ� ���� ���� ���� ȸ�Ǹ� �غ��϶���.\n");
	printf("\t1. �������� �ۼ��Ѵ�.");
	printf("\t2. ���� �Ȱ��� �غ��Ѵ�.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}
	system("cls");
//[12�� ����]
	printf("\t���� ü���� ������ ���ǿ� ���ƿ� �ϱ⸦ ����.\n");
	printf("\t1. ������ �ϵ��� ��� ����Ѵ�.");
	printf("\t2. �ΰ��� ������.");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}
	system("cls");
//�ݺ���
//12�� �ݺ��� �����ϴ� �ڵ�(i�� 0���� �����ؼ� �۾��� ���� ������ 1�� i�� ����,i�� 12���� ���� ���� �ݺ�)
	int total = 0;
	for (int i = 0; 1 < 12; i++)
	{
		total += selected[i];
	}

	printf("�� �ӿ��� �����");
	//12 ~ 13��
	if (total >= 12 && total <= 13)
	{
		printf("���� ���� ū ����� Tiger\n"):
	}
	else if  (total == 24)
	{
		printf("���� ���� ū ������ Wolf")
	}
	return 0;
}