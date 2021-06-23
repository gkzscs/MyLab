#!/usr/bin/python3
# -*- coding: utf-8 -*-

# import sys
from sys import argv, path

print('argv:', end = ' ')
for v in argv:
	print(v, end = ' ')

print('\npython\'s path is: ', path)
