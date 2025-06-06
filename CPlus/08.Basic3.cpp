//#include <iostream>
//using namespace std;
//
////배열(Array)
////"같은" 형태의 "여러 개의 데이터"를 "연속적으로" 저장하고 처리하는 데이터 타입 
//
////배열 사용 목적
////연관되어 있는 데이터를 모아서 관리하기 위해 사용합니다.
//
////배열 만드는 방법(선언)
////자료형 배열명[데이터의 개수];
//
////배열을 만드는 방법(선언 및 초기화)
////자료형 배열명[] = {값1,값2,값3,....};
//
////배열에서 알아둘 내용
////1. 배열의 길이(length) = 데이터의 개수
////						= sizeof(배열명) / sizeof(자료형);
//
////2. 배열의 요소(element) = 배열 안에 들어있는 값을 의미합니다.
////						ex) int array1[] = {1,2,3,4,5}; 라고 한다면
////						배열의 요소는 총 5개이며, 각각 1,2,3,4,5입니다.
//
////3. 배열의 인덱스(index) = 배열 안에 있는 값에 대한 위치를 표현하는 데이터
////						   인덱스 번호는 배열 생성 후, 범위가 정해집니다.
////						   인덱스의 범위는 0번 부터 배열의 길이 -1까지의 범위
////						ex) 위에 있는 array1의 인덱스는 0 ~ 4까지 제공
//
////4. 인덱스를 이용해 요소에 접근하는 방법
//// 배열명[인덱스번호]는 해당 위치에 있는 요소입니다.
////ex) array1[2]는 array1의 인덱스 2번째 데이터, 즉 '3'이다.
//
//
////5. N차원 배열 만들기
////   int array1[5];과 같은 배열은 1차원 배열이라고 부릅니다.
////   1차원 배열을 요소로 가지는 배열 => 2차원 배열
////   int array2[3][5];  3행 5열, 3x5 2차원 배열이라고 부릅니다.
////	 2차원 배열을 요소로 가지는 배열 => 3차원 배열
////   int array3[3][3][5]; 3x3x5 배열
//
////6. 2차원 배열에서 요소 접근하는 방법
////   int arr[3][4] =
////{
//// {1,2,3,4}
//// ,
//// {5,6,7,8}
//// ,
//// {9,10,11,12}
////};
//// 저 값 중에서 6에 접근합니다.
//// 2차원 배열을 보면 4칸짜리 배열이 3개 배치되어있습니다.
//// 그중에서 6은 2번째 위치의 배열에 존재하며
//// 6은 내부 배열의 2번째 데이터입니다.
//// 따라서 값은 arr[1][1]
////질문 : 위의 배열 중에서 11을 접근하시오. arr[2][2]
//
////7. 이차원 배열에서 행과 열의 크기 분석
////행 = 세로열 , 열 = 가로열(내부 배열)
//
////행의 크기 = sizeof(배열명) / sizeof(배열명[0]);
////전체의 배열 크기에서 한 열에 있는 크기를 빼면 행의 크기가 나오게 됩니다.
//
////열의 크기 = sizeof(배열명[0]) / sizeof(int)
////한 열로부터 데이터 크기만큼 나누면 열의 크기가 나오게됩니다.
//
//int main()
//{
//	//1. 배열 생성
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	string arr2[] = { "sample","test","hello" };
//	char arr3[] = { 'a','b','c','d' };
//	bool arr4[] = { true,false,true,false };
//	float arr5[] = { 1.1f, 1.2f,1.3f };
//
//	//2. 배열 요소 출력
//	cout << "arr1의 4번째 데이터 : " << arr1[3] << endl;
//	cout << "arr2의 3번째 데이터 : " << arr2[2] << endl;
//	cout << "arr3의 3번째 데이터 : " << arr3[2] << endl;
//	cout << "arr4의 2번째 데이터 : " << arr4[1] << endl;
//	cout << "arr5의 1번째 데이터 : " << arr5[0] << endl;
//
//	//3. 배열 선언 후 데이터 추가
//	//주로 int형태의 배열에서 해당 작업을 많이 함.
//	//일일히 데이터를 직접 넣어주는 것보다, 반복적인 패턴으로 빠르게 만들어주는 것이
//	//더 편함.
//	int arr6[100];
//	int value = 1;
//
//	for (int i = 0; i < 100; i++)
//	{
//		arr6[i] = value++;
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		cout << arr6[i] << " ";
//	}
//
//
//	//이차원 배열 사용해보기
//
//	//이차원 배열을 활용해 표현해본 파스칼의 삼각형 모양
//	int paskal[8][8];
//	cout << endl;
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				paskal[i][j] = 1;
//			}
//			else
//			{
//				paskal[i][j] = paskal[i - 1][j - 1] + paskal[i - 1][j];
//			}
//			cout << paskal[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	//2차원 배열을 이용해 간단한 메뉴판 만들기
//
//	string menu[3][2] =
//	{
//		{"기본김밥","3000원"}
//		,
//		{"참치김밥","4000원"}
//		,
//		{"모둠김밥", "4000원"}
//	};
//
//	int row = sizeof(menu) / sizeof(menu[0]);
//	int column = sizeof(menu[0]) / sizeof(string);
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << menu[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}