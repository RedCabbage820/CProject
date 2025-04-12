#include <iostream>
using namespace std;
//유형별 연산자 오버로딩에 대한 연습
//수업때는 같이 진행해보고, 집에서는 유형 별로 연습해볼 것


//1. 단항 연산자 ++, --
class Dot
{
private :
	int x;
	int y;
public :
	//매개변수가 x = 0 처럼 값이 설정되어있는 경우 디폴트 매개변수라고 부르며
	//x와 y에 값을 넣지 않았을 경우에 대한 기본 값 설정 용도
	//ex) Dot d(1,5); --> [1,5]
	//ex) Dot d(1); --> [1,0]
	//ex) Dot d; --> [0,0]
	Dot(int x = 0, int y = 0) : x(x), y(y) { }

	void info()
	{
		cout << "[" << x << "," << y << "]" << endl;
		//[2,4]
	}

	//전위 ++ 연산
	//++a, --a
	//a에 대한 +1과 -1을 먼저 진행하고, 그 후에 남은 연산을 처리합니다.
	// ++a - 3 ? a = 8 , 결과 = 5
	Dot &operator++(void)
	{
		//++ 연산을 진행한다.
		x++;
		y++;
		//그 결과물(자기 자신)을 return한다.
		return (*this);
	}
	//후위 ++ 연산
	//a++, a--
	//연산을 먼저 처리하고, a에 대한 +1 또는 -1을 진행합니다.
	//ex) a= 7
	// a++ -3 ? 결과 = 4, a = 8
	const Dot operator++(int)
	{
		// 현재 정보를 기준으로 데이터 생성(이 값은 변질되지 않습니다.)
		const Dot temp(*this);
		//x , y 에 대한 계산을 처리한다.
		x++;
		y++;
		//복제본(연산이 끝났던 데이터)를 return 한다.
		return temp;
	}

};