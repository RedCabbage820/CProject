//#include "Header.h"
////���� Ŭ������ ���� �����θ�, ���α׷� ������ Ư�� ������ ���� ���ó��
////��Ա� �����մϴ�.
//
////���ῡ ���õ� ���� ��Ȳ
//class ConnectException
//{
//public :
//	void NormalMessage()
//	{
//		cout << "�������� ������ �����߽��ϴ�." << endl;
//	}
//	//�޼ҵ�(�Լ�) ���� �� �̸��� ������, �Ű������� �ٸ��ٸ�
//	//�ٸ� �ڵ�� ����մϴ�.(�޼ҵ� �����ε�)
//	void LoginFailMessage(string id)
//	{
//		cout << "���̵� �������� �ʽ��ϴ�." << endl;
//	}
//	void LoginFailMessage(int pw)
//	{
//		cout << "��й�ȣ�� �߸� �Է���ϴ�." << endl;
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
//		//if-else�� ������ �ʰ� if���� �����ص� �˴ϴ�.
//		//throw�� ���� �������� ����
//
//		string input_id; //�Է¿� ���̵�
//		string input_pw; //�Է¿� ��й�ȣ
//
//		cout << "���̵� �Է����ּ���.";
//		cin >> input_id;
//		cout << "��й�ȣ�� �Է����ּ���.";
//		cin >> input_pw;
//	}
//	void OnOFF()
//	{
//		if (onoff == true)
//		{
//			onoff = false;
//			cout << "�α��� ���� ���� " << endl;
//		}
//		else
//		{
//			onoff = true;
//			cout << "�α��� ���� �� " << endl;
//		}
//	}
//public :
//	//���������δ� Ŭ������ ���� has A�� ó���ϴ� �� ��õ
//	string id = "sample1234"; //�������� ����� ���̵�
//							 //�������� ����� ��й�ȣ
//
//	string server_name;
//	bool onoff;
//	Server(string s, bool o) : server_name(s), onoff(o) { }
//	void Menu()
//	{
//		while (true)
//		{
//			int select;
//			cout << "1. �α��� ���� 2. ���� �� ���� ���� 3. ���� >>";
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
////1. �α��� ��� �����ϱ�
////2. �α��� ���� ��Ȳ�� ���� ������ ���� catch�ϱ�
//
////�ʿ��ϴٸ� Ŭ������ �߰��� �� ���� �˴ϴ�.
//
//int main()
//{
//	Server server("SBS", false);
//	try
//	{
//		server.Menu();
//	}
//	catch (ConnectException& e) //Ŭ������ ���� catch �ÿ��� Ŭ������&���� �����Ѵ�.
//	{
//		e.NormalMessage();
//	}
//
//	return 0;
//}