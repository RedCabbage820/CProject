#include "Header.h"


//1. 아래의 실행결과 1의 출력 결과와 동일하도록, 함수 getCount()를 구현하세요.
//실행 결과 1
//1 2 3 4 5 6 7 8 9 10

void getCount()
{
	static int count = 1;
	cout << count << " ";
	count++;
}

//2. 두 개의 정수를 매개변수로 입력받아 두 정수 사이에 있는 모든 정수의 합을 구하여 return하는 함수를 정의하고,
//	 main 함수에서 이를 호출하는 프로그램을 작성해보세요.
//실행 예시) 5와 9 사이의 정수의 총합은 21입니다.

//4. 사용자로부터 키를 cm단위로 입력받아 m단위로 환산하여 출력하는 프로그램을 작성합니다.
// 해당 함수는 키를 함수의 인자로 전달받아 단위의 값으로 retun

int main()
{
	//문제 1 풀이)
	for (int i = 0; i < 10; i++)
	{
		getCount();
	}
	//문제 2 풀이

	//문제 4)
	//힌트 (float)정수는 정수를 실수로 변경해줍니다.(casting)
	int height;
	cout << "키를 cm단위로 입력해주세요 >> ";
	cin >> height;
	cout.precision(3); //정수+소수를 포함한 출력 범위 설정 (정수 1, 실수 2자리)

	//cout으로 자릿수 표현하기
	//1. cout.precision(숫자); 정수 + 소수를 출력한 출력 범위를 설정
	//ex) 18.719를 표현할거면 precision(5)로 처리됩니다.

	//2. cout << fixed; //해당 명령어는
	return 0;
}