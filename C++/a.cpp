#include <iostream>
#include <cstring>
#include <string>
#include <list>
using namespace std;

#define SHOW 0


struct Stu
{
	bool sex;
	int age;
	string name;
};

void test()
{
	Stu stu;
	
	if (typeid(stu.sex) == typeid(bool)) cout << "sex is bool" << endl;
	if (typeid(stu.sex) == typeid(int)) cout << "sex is int" << endl;
	if (typeid(stu.sex) == typeid(string)) cout << "sex is string" << endl;
	
	if (typeid(stu.age) == typeid(bool)) cout << "age is bool" << endl;
	if (typeid(stu.age) == typeid(int)) cout << "age is int" << endl;
	if (typeid(stu.age) == typeid(string)) cout << "age is string" << endl;
	
	if (typeid(stu.name) == typeid(bool)) cout << "name is bool" << endl;
	if (typeid(stu.name) == typeid(int)) cout << "name is int" << endl;
	if (typeid(stu.name) == typeid(string)) cout << "name is string" << endl;
}

int main()
{
	test();

	list<Stu *> listStu;
	//cout << typeid(listStu)::name << endl;
	if (typeid(Stu *) == typeid(listStu.front())) cout << "type is Stu" << endl;
}
