import ctypes
from ctypes import *

# Load library
adder = ctypes.cdll.LoadLibrary('./add.so')

# Call `add_int`
res_int = adder.add_int(4, 5)
print ('4+5=' + str(res_int))

# Call `add_float`
a = ctypes.c_float(5.5)
b = ctypes.c_float(4.1)

add_float = adder.add_float
add_float.restype = ctypes.c_float

print ('5.5 + 4.1 = ' + str(add_float(a,b)))
print (add_float(a, b))

# Use another way to call `add_float`
adder.add_float.argtypes = [ c_float, c_float ]
adder.add_float.restypes = c_float

res = adder.add_float(c_float(5.5), c_float(4.1))
print (res)
