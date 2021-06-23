from ctypes import *

libc = cdll.LoadLibrary('./calc.so')
libc.max.argtypes = [c_double, c_double]
libc.max.restype = c_double

a = 1.23
b = 4.56
res = libc.max(c_double(a), c_double(b))

print(res)
