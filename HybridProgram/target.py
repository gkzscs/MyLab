from ctypes import *
test = cdll.LoadLibrary("./target.so")

class test_struct(Structure):
	_fields_ = [('ptr', c_char_p),
			('c', c_float),
			('array', c_char*10)]
	struct = test_struct(c = 0.5)
	test.hello.restype = POINTER(test_struct)

ret_struct = test.hello(pointer(struct))
print (ret_struct.contents.ptr)
print (ret_struct.contents.c)
