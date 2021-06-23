#!/usr/bin/python3
# -*- coding: utf-8 -*-

# Number
print('-----------------Number--------------------')
a, b, c, d = 123, 66.66, False, 1+2j
print(a, b, c, d)
print(type(a), type(b), type(c), type(d))
print(isinstance(a, int), isinstance(b, float), isinstance(c, bool), isinstance(d, complex))

del a, b
a = b = 3
b = 2.2

print(a + b)
print(a - b)
print(a / b)
print(a // b)
print(a * b)
print(a % b)
print(a ** b)

# List
print('\n---------------------List---------------------')
la = [123, 1.4, False, 2+1j, ['a', 'b', 3.3]]
lb = ['cs', 'gyy']

print(la)
print(lb)
print(la[4])
print(la[:4])
print(la[1:3])
print(la[::-1])
print(la + lb)

la[4][0] = 'first'
la[:2] = '1', '2'
print(la)
print(la[-1])
print(la[-1] + la[::-1] + lb)

# Tuple
print('\n---------------------Tuple---------------------------')
tupA, tupB = ('a', 123, False), ('b', [1, 2, 'cd'])
tupEmpty, tupLonely = (), ('lonely',)
print(tupA)
print(tupB)
print(tupA[::-1])
print(tupA + tupB)
print(tupEmpty)
print(tupLonely)

tupB[1][1] = 'second'
print(tupB[1][1])

# Set
print('\n-------------------------Set----------------------------')
sa = { 'Google', 'baddu', 'sogou', 12, False }
sb = { 'a', 'b', 12, True }
sempty = set()

print(sempty)
print(sa)
print(sb)
print(sa - sb)
print(sa | sb)
print(sa & sb)
print(sa ^ sb)

