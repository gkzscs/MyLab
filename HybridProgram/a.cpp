#include <iostream>
#include <Python.h>
using namespace std;

int main()
{
	Py_Initialize();
	PyRun_SimpleString("print ('hello')");
	Py_Finalize();
}
