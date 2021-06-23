import platform
from ctypes import *

test = cdll.LoadLibrary("./dist.so")
test.dist.argtypes = [c_float, c_float, c_float, c_float, c_float, c_float]
test.dist.restype = c_float

a = [3, 0, 0]
a1 = [0, 4, 0]
r = test.dist(c_float(a[0]), c_float(a[1]), c_float(a[2]), c_float(a1[0]), c_float(a1[1]), c_float(a1[2]))

print(r)
