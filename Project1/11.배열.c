#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C언어에서의 배열
//자료형 배열명[길이];

//배열에 값(요소 : element)을 넣는 방법
//배열명[인덱스] = 값;
//인덱스의 범위 = 0부터 배열의 길이 -1까지의 범위

//배열의 길이 구하는 방법
// sizeof(배열명); / sizeof(자료형);

//배열의 크기를 구하는 방법
// sizeof(배열명);

int main()
{
	int iArray[5]; // 0 ~ 4
	int iArray[0] = 1;
	int iArray[1] = 2;
	int iArray[2] = 3;
	int iArray[3] = 4;
	int iArray[4] = 5;

	printf("배열 iArray가 가지고 있는 요소 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", iArray[i]);
	}
	printf("\n");
	int size = sizeof(iArray);
	printf("배열의 크기 : %d byte\n", size);
	int length = sizeof(iArray) / sizeof(int);
	printf("배열의 길이 : %d\n", length);
	printf("배열의 길이 : %d\n", iArray);
	//배열은 같은 형태의 데이터를 묶어서 따로 관리하는 데이터입니다.
	//각 배열의 요소는 일정한 간격으로 주소를 가지게 됩니다.
	//배열의 첫번째
}