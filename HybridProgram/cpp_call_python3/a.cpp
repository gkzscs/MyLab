#include <Python.h>
#include <iostream>
using namespace std;


void print()
{
	Py_Initialize();
	PyRun_SimpleString("print('Hello Python!')\n");
	Py_Finalize();
}

void hello()
{
	Py_Initialize();
	if (!Py_IsInitialized()) cout << "Failed to initialize python module\n";

	PyRun_SimpleString("import sys");
//	PyRun_SimpleString("sys.path.append('/home/cs/MyLab/HybridProgram/cpp_call_python3')");
	PyRun_SimpleString("sys.path.append('./')");

	PyObject *module = PyImport_ImportModule("a1");
	if (!module) cout << "Module is nullptr\n";

	PyObject *func = PyObject_GetAttrString(module, "hello");
	PyEval_CallObject(func, NULL);

	Py_Finalize();
}

int main()
{
	print();
	hello();
}

