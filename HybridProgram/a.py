import platform 
from ctypes import *


if platform.system() == 'Windows':
	libc = cdll.LoadLibrary('msvcrt.dll')
elif platform.system() == 'Linux':
	libc = cdll.LoadLibrary('libc.so.6')

# libc.printf('Hello world!\n')
# libc.printf("Hello world\n")
libc.printf("%s", "hello world\n")
