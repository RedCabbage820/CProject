//#include <iostream>
//using namespace std;
////���� ������ ����, Ŭ������ �����ϼ���.
////1. �ڵ����� ������ ������ �ֽ��ϴ�.
//class Engine 
//{
//};
//class Car
//{
//public:
//	Engine engine;
//};
////2. ö���� ���� ���� �缭 ���� ���� �ֽ��ϴ�.
//class Cloth {};
//class ö��
//{
//private :
//	Cloth cloth;
//};
//
////3. ���� �ڵ�� ���� �������� �Ǵ��Ͻÿ�.
//class Student
//{
//private:
//	string name;
//	int age;
//public : 
//	Student() { name = ""; age = 0; }
//	Student(string name, int age) : name(name), age(age) {}
//	string getName() { return name; }
//	int getAge() { return age; }
//};
//class Classroom
//{
//private :
//	string className;
//	Student students[10];
//	int studentCount;
//	int maxCount = 10;
//public :
//	Classroom(string className) : className(className)
//	{
//		studentCount = 0;
//	}
//	void regist(Student newStudent)
//	{
//		if (studentCount < maxCount)
//		{
//			students[studentCount++] = newStudent;
//		}
//		else
//		{
//			cout << "class is full" << endl;
//		}
//	}
//	void studentInfo()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (students[i].getName() != "")
//			{
//				cout << "name : " << students[i].getName() << " age : " << students->getAge() << endl;
//			}
//		}
//	}
//};
//
//
//
//int main()
//{
//	return 0;
//}