#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C������ �迭
//�ڷ��� �迭��[����];

//�迭�� ��(��� : element)�� �ִ� ���
//�迭��[�ε���] = ��;
//�ε����� ���� = 0���� �迭�� ���� -1������ ����

//�迭�� ���� ���ϴ� ���
// sizeof(�迭��); / sizeof(�ڷ���);

//�迭�� ũ�⸦ ���ϴ� ���
// sizeof(�迭��);

int main()
{
	int iArray[5]; // 0 ~ 4
	int iArray[0] = 1;
	int iArray[1] = 2;
	int iArray[2] = 3;
	int iArray[3] = 4;
	int iArray[4] = 5;

	printf("�迭 iArray�� ������ �ִ� ��� : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", iArray[i]);
	}
	printf("\n");
	int size = sizeof(iArray);
	printf("�迭�� ũ�� : %d byte\n", size);
	int length = sizeof(iArray) / sizeof(int);
	printf("�迭�� ���� : %d\n", length);
	printf("�迭�� ���� : %d\n", iArray);
	//�迭�� ���� ������ �����͸� ��� ���� �����ϴ� �������Դϴ�.
	//�� �迭�� ��Ҵ� ������ �������� �ּҸ� ������ �˴ϴ�.
	//�迭�� ù��°
}