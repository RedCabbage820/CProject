//#include <iostream>
//using namespace std;
////클래스 : 정보 은닉
////객체의 내부 구현을 외부로부터 숨기는 것을 의미합니다.(private)
////캡슐화(Encapsulation)
////객체의 상태와 동작을 하나로 묶어서 그 기능을 통해 상호 작용하도록 합니다.
//// --> 가려줄 데이터를 private로 설정, 그 데이터에 대한 설정, 접근을 할 수 있는
////	   기능(메소드)을 public으로 제공합니다.
//
//
//class Student
//{
//private :
////학번과 학생의 이름은 외부에서 함부로 수정되면 안되는 값
//	int sid;
//	string sname;
//public :
////set 함수 : void 형태의 함수이면서, 설정하려는 데이터의 형태를 매개변수로 가지고 있습니다.
////			전달받은 값으로, 객체의 상태를 초기화하는 기능을 가지고 있습니다.
////			set + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성합니다.
//
//// get 함수 : 데이터의 형태를 반환 타입으로 가지는 형태의 함수입니다.
////				매개변수를 따로 가지지 않습니다.
////				해당 데이터 값을 그대로 return하는 기능을 가지고 있습니다.
////				get + 변수명으로 이름을 만들어주며, 보통 변수의 앞글자를 대문자로 작성합니다.
//	void setSid(int id)
//	{
//		sid = id;
//	}
//	int getSid()
//	{
//		return sid;
//	}
//	void setSname(string name)
//	{
//		sname = name;
//	}
//	string getSname()
//	{
//		return sname;
//	}
//};
//
////다음 조건에 맞는 클래스 Point를 설계하시오.
////1. point 클래스는 좌표를 표현하기 위한 클래스입니다.
////2. 좌표는 X축과 Y축
////3. X축과 Y축에 대한 set/get 함수를 구현합니다.
////4. point 클래스는 현재의 좌표를 출력하는 함수 show()를 가지고 있습니다.
////	 좌표의 기준에 따라 몇 사분면인지도 같이 출력합니다.
////	 사분면이란? 좌표의 위치에 따라 제 1,2,3,4사분면으로 부릅니다.
//// 출력 예시) 좌표가 10, 5일 경우
////			 좌표 : (10, 5) 제 1사분면
////5. main 코드에서 point 객체 p1을 선언합니다.
////6. p1의 축을 설정합니다.
////7. show()를 통해 해당 좌표를 출력합니다.
//
////1. X,Y에 대한 선언, X,Y에 대한 s/g 구현 --> 1점
////2. show() 구현
////	 1. public 영역에 구현 -- 1점
////   2. 좌표에 대한 출력 -- 1점
////   3. 사분면에 대한 출력 -- 3점
////3. main에서 객체 p1선언 -- 1점
////4. 실행 시 콘솔 창에 정상적으로 출력 -- 4점
//
//class Point
//{
//private :
//	int X;
//	int Y;
//public :
//	void setX(int x)
//	{
//		X = x;
//	}
//	int getX()
//	{
//		return X;
//	}
//	void setY(int y)
//	{
//		Y = y;
//	}
//	int getY()
//	{
//		return Y;
//	}
//	void show()
//	{
//		int quad = 0; //사분면에 대한 변수
//
//		//사분면에 대한 설정
//		if (X > 0 && Y > 0)
//		{
//			quad = 1;
//		}
//		else if (X < 0 && Y > 0)
//		{
//			quad = 2;
//		}
//		else if (X < 0 && Y < 0)
//		{
//			quad = 3;
//		}
//		else if (X > 0 && Y < 0)
//		{
//			quad = 4;
//		}
//
//		//좌표 출력
//		cout << "(" << X << "," << Y << ") ";
//		//printf("(%d,%d)", X, Y);
//
//		//사분면 출력
//		//정답 기준에서는 원점은 따로 안뽑아도 됩니다.(원점 만드신 분들을 위한 풀이)
//		if (quad == 0)
//		{
//			cout << "원점" << endl;
//		}
//		else if (quad == 1)
//		{
//			cout << "제1사분면" << endl;
//		}
//		else if (quad == 2)
//		{
//			cout << "제2사분면" << endl;
//		}
//		else if (quad == 3)
//		{
//			cout << "제3사분면" << endl;
//		}
//		else if (quad == 4)
//		{
//			cout << "제4사분면" << endl;
//		}
//	}
//};
//
//int main()
//{
//	//student01 객체 선언
//	Student student01;
//
//	//student01 객체의 데이터 초기화
//	student01.setSid(2025451); //2025년 4월 5일에 등록된 1번째 학생
//	student01.setSname("엘리자베스 장첸"); //학생 이름
//
//	//student01 객체의 정보를 출력
//	cout << "학번 : " << student01.getSid() << " 이름 : " << student01.getSname() << endl;
//
//	Point p1;
//	p1.setX(10);
//	p1.setY(5);
//	p1.show();
//
//	Point p2;
//	p2.setX(-10);
//	p2.setY(5);
//	p2.show();
//
//	Point p3;
//	p3.setX(-10);
//	p3.setY(-5);
//	p3.show();
//
//	Point p4;
//	p4.setX(10);
//	p4.setY(-5);
//	p4.show();
//
//	return 0;
//}