//#include "Header.h"
////예외 클래스를 따로 만들어두면, 프로그램 내에서 특정 오류에 대한 사용처로
////써먹기 용이합니다.
//
////연결에 관련되 예외 상황
//class ConnectException
//{
//public :
//	void NormalMessage()
//	{
//		cout << "서버와의 연결이 실패했습니다." << endl;
//	}
//	//메소드(함수) 설계 시 이름이 같지만, 매개변수가 다르다면
//	//다른 코드로 취급합니다.(메소드 오버로딩)
//	void LoginFailMessage(string id)
//	{
//		cout << "아이디가 존재하지 않습니다." << endl;
//	}
//	void LoginFailMessage(int pw)
//	{
//		cout << "비밀버호가 잘못 입력됬습니다." << endl;
//	}
//};
//
//class Server
//{
//private :
//	void Login()
//	{
//		if (onoff == false)
//			throw ConnectException();
//
//		//if-else로 따지지 않고 if문만 설계해도 됩니다.
//		//throw에 의해 끊어지기 때문
//
//		string input_id; //입력용 아이디
//		string input_pw; //입력용 비밀번호
//
//		cout << "아이디를 입력해주세요.";
//		cin >> input_id;
//		cout << "비밀번호를 입력해주세요.";
//		cin >> input_pw;
//	}
//	void OnOFF()
//	{
//		if (onoff == true)
//		{
//			onoff = false;
//			cout << "로그인 상태 오프 " << endl;
//		}
//		else
//		{
//			onoff = true;
//			cout << "로그인 상태 온 " << endl;
//		}
//	}
//public :
//	//개인적으로는 클래스를 만들어서 has A로 처리하는 걸 추천
//	string id = "sample1234"; //서버에서 사용할 아이디
//							 //서버에서 사용할 비밀번호
//
//	string server_name;
//	bool onoff;
//	Server(string s, bool o) : server_name(s), onoff(o) { }
//	void Menu()
//	{
//		while (true)
//		{
//			int select;
//			cout << "1. 로그인 진행 2. 서버 온 오프 설정 3. 종료 >>";
//			cin >> select;
//
//			switch (select)
//			{
//			case 1:
//				Login(); break;
//			case 2:
//				OnOFF(); break;
//			case 3:
//				exit(0);
//			}
//		}
//	}
//};
////1. 로그인 기능 연출하기
////2. 로그인 실해 상황에 따라 적절한 예외 catch하기
//
////필요하다면 클래스를 추가로 더 만들어도 됩니다.
//
//int main()
//{
//	Server server("SBS", false);
//	try
//	{
//		server.Menu();
//	}
//	catch (ConnectException& e) //클래스에 대한 catch 시에는 클래스명&으로 접근한다.
//	{
//		e.NormalMessage();
//	}
//
//	return 0;
//}