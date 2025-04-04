//#include <iostream>
//using namespace std;
//
//
//
//
//int main()
//{
//	//1. if문 : 특정 조건에 맞게 명령문을 실행하는 방법
//	//조건을 세우기 위해선 데이터가 필요합니다.(초기식)
//
//	//다음 if문을 구현해보자
//	//만약에 물이 500ml 초과라면 "실패"를 출력합니다.
//
//	//조건 : "물"이 "500ml" 초과
//	//물은 명칭 , 500(ml)가 값, 기준은 500 초과 ( 물 > 500)
//
//	int water = 600;
//	if (water > 500)
//	{
//		cout << "실패" << endl;
//	}
//
//	//2. if else문 : 특정 조건에 맞는 경우와 아닌 경우를 둘 다 설계합니다.
//	//				 Yes or No 처럼 답이 확실한 경우에 설계하는 방식
//
//	//유의사항 : else는 if문의 보조 문법으로 단독으로는 사용 불가(if문이 존재해야 가능합니다.)
//
//	//코인 토스를 진행합니다.(앞 또는 뒤)
//	bool cointoss = true;
//	//bool은 true(진실), false(거짓)을 표현하는 C++의 데이터입니다.
//	//이 예제에서는 true를 앞(Head), false를 뒤(Tail)
//
//	if (cointoss == true)
//	// ==은 "같다"의 뜻을 가지고 있습니다.
//	{
//		cout << "앞" << endl;
//	}
//	else
//	{
//		cout << "뒤" << endl;
//	}
//
//	//3. if - else if문 : 선택지가 2개 이상인 경우, 그 조건들 이외에는 따로 실행하고 싶지 않은 경우
//
//	//if만3번 적는 것과의 차이점
//	//else if는 다른 조건이 만족하고 있다면, 실행되지 않습니다.
//	//if문은 조건의 판단을 위해 무조건 실행됩니다.
//
//	//아래의 코드를 if로 짜면 if 3번을 전부 확정적으로 처리해야합니다.
//	//else if와 섞으면, 조건이 맞으면 나머지 조건은실행 안합니다.
//	
//	//1번을 고르면 100포인트
//	//2번을 고르면 300포인트
//	//3번을 고르면 500포인트인 사다리 게임을 구현해보기
//
//	int choice = 3;
//
//	if (choice == 1)
//	{
//		cout << "100 포인트" << endl;
//	}
//	else if (choice == 2)
//	{
//		cout << "300 포인트" << endl;
//	}
//	else if (choice == 3)
//	{
//		cout << "500 포인트" << endl;
//	}
//
//	return 0;
//}