//#include <iostream>
//using namespace std;
//
////생성자, 소멸자 사용
//class 클래스명
//{
//	//생성자(Constructor)
//	//클래스의 이름과 동일하고, 따로 타입이 없는 메소드(함수)
//	//특징)
//	//    클래스를 통한 객체가 생성되었을 때, 자동적으로 호출됩니다.
//	//    따로 만들지 않을 경우 자동으로 클래스명();의 형태가 됩니다.
//	클래스명()
//	{
//		//생성 시 실행할 명령문을 작성하는 위치
//		//생성 시 클래스 내부의 데이터에 대한 초기화를 주로 진행합니다.
//	}
//	//소멸자(Destructor)
//	//클래스의 이름과 동일하고, 따로 타입이 없으며 앞에 ~가 붙는 메소드
//	//특징)
//	//	  클래스를 통한 객체가 메모리 상에서 제거되었을 때, 자동으로 호출됩니다.
//	//    한 클래스 당 소멸자는 1개만 존재할 수 있습니다.
//	~클래스명()
//	{
//		//소멸 시 실행할 명령문을 작성하는 위치
//		//주로 동적 할당에서 메모리에 대한 해제를 진행하는 경우에 사용됩니다.
//	}
//};
//
//class Pokemon
//{
//private :
//	string name;
//	int hp;
//public :
//	//1. 생성자 오버로딩(Overloading)
//	//생성자는 여러 개를 만들 수 있습니다. 단 조건이 존재합니다.
//	//조건) 생성자의 매개변수의 개수, 순서가 다른 경우
//	Pokemon()
//	{
//		name = "MISSINGNO";
//		hp = 0;
//	}
//	//[생성자 수정]
//	//생성자 선언부에 매개변수를 작성할 경우, 생성 시 해당 값에 대한 정보를 넣어줘야 합니다.
//	
//	//클래스명(매개변수) : 변수명(매개변수명)
//	//자동적으로 전달받은 값이 클래스 내부의 변수로 초기화됩니다.(Initializer)
//	Pokemon(string name, int hp) : name(name), hp(hp)
//	{
//		cout << name << "이(가) 등장했습니다!" << endl;
//	}
//	~Pokemon()
//	{
//		cout << name << "이(가) 쓰러졌습니다!" << endl;
//	}
//	void show()
//	{
//		cout << "이름 : " << name << " 체력 : " << hp << endl;
//	}
//	void skill(string skill_name, int value, Pokemon* other)
//	{
//		cout << name << "의 " << skill_name << "!" << endl;
//		other->hp -= value;
//		if (other->hp <= 0)
//		{
//			delete other;
//		}
//	}
//};
//
//void MonsterBall()
//{
//	Pokemon* p4 = new Pokemon("뮤", 100);
//}
//
//int main()
//{
//	//new를 통한 클래스 할당 코드
//	//클래스명* 객체명 = new 생성자명(인자 값);
//
//	Pokemon* p1 = new Pokemon("피카츄",50);
//	Pokemon* p2 = new Pokemon("이브이", 50);
//
//	Pokemon p3;
//
//	MonsterBall();
//
//	p1->show();
//	p2->show();
//	p1->skill("전기쇼크", 40, p2);
//	p2->skill("몸통박치기", 60, p1);
//
//
//	return 0;
//}
//