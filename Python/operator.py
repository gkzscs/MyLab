#! /usr/bin/python3
# -*- coding: utf-8 -*-

# Arithmetic operation
print('\n----------------------Arithmetic-------------------')
a, b = 3, 2
print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a // b)
print(a % b)
print(a ** b)

# Comparasion operation
print('\n----------------------Comparasion---------------------')
print(a == b)
print(a != b)
print(a > b)
print(a < b)
print(a >= b)
print(a <= b)

# Logic operation
print('\n-----------------------Logic---------------------------')
a = True
b = False

print(a)
print(b)
print(a and b)
print(a or b)
print(not b)

# Assignment operation
print('\n----------------------Assignment----------------------------')
a = 1
print(a)

a += 2
print(a)

a -= 2
print(a)

a *= 2
print(a)

a /= 2
print(a)

a %= 2
print(a)

a **= 2
print(a)

a //= 2
print(a)

# Bit operation
print('\n------------------------------Bit----------------------------------')
a, b = 2, 4

print(a & b)
print(a | b)
print(a ^ b)
print(~b)
print(a << b)
print(a >> b)

# Member operation
print('\n------------------------------Member-------------------------------')
a = 2
b = 'one'
da = (1, 2, 3, 'one')

if a in da:
	print('a in da')
if b in 'one':
	print('b in da')
else:
	print('other case')

# Identity operation
print('\n------------------------------Identity------------------------------')
a = 20
b = 20

if (a is b):
	print('a is b')
elif (a is not b):
	print('a is not b')

if (id(a) == id(b)):
	print('a has the same id as b')
else:
	print('a and b have different id')

a = 30

if (a is b):
	print('a is b')
elif (a is not b):
	print('a is not b')

if (id(a) == id(b)):
	print('a has the same id as b')
else:
	print('a and b have different id')
