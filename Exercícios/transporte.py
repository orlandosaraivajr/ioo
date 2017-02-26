#!/usr/bin/python3
#coding: utf-8

class Transporte:
    def mostrar (self):
        print ('Transporte sendo apresentado')

class Caminhao(Transporte):
    def __init__(self,modelo):
        self.modelo = modelo

    def mostrar (self):
        print ('Caminhão modelo ' + str(self.modelo))

ford = Caminhao('Ford')
ford.mostrar()

