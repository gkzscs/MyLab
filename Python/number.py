#! /usr/bin/python3
# -*- coding: utf-8 -*-

# Hexadecimal, octal
a, b = 0xff, 0o17

print(a, b)

# Complex
a = 1+2j
b = 1.23
c = 2

print(a, b, c)
print(int(b))
print(float(c))
print(complex(b))
print(complex(b, c))

# Round
b += 2.3
print(b)
print(round(b, 1))
