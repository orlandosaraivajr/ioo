#!/usr/bin/python3
#coding: utf-8

class A:
    a = 1

class B(A):
    _c = 3

    def __init__(self):
        print (self.a)
        print (self._c)

a = A()
if isinstance(a, B):
    print ('a é instância da classe B ')

b = B()
if isinstance(b, B):
    print ('b é instância da classe B ')

c = A()
if isinstance(c, A):
    print ('c é instância da classe A ')

d = B()
if isinstance(d, A):
    print ('d é instância da classe A ')
