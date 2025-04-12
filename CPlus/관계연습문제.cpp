//#include <iostream>
//using namespace std;
////다음 설명을 통해, 클래스를 설계하세요.
////1. 자동차는 엔진을 가지고 있습니다.
//class Engine 
//{
//};
//class Car
//{
//public:
//	Engine engine;
//};
////2. 철수는 오늘 옷을 사서 집에 가고 있습니다.
//class Cloth {};
//class 철수
//{
//private :
//	Cloth cloth;
//};
//
////3. 다음 코드는 무슨 관계인지 판단하시오.
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