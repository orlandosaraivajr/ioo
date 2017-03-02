#!/usr/bin/python3
# coding: utf-8
#
# Programa: soma

def soma(numero_01, numero_02):
    return numero_01 + numero_02
	

numero1 = 3
numero2 = 4
valor = soma(numero1,numero2)
print('Soma :' + str(valor) + '\n\n')

numero2 = 4.2198
valor = soma(numero1,numero2)
print('Soma :' + str(valor) + '\n\n')

numero1 = "Oi "
numero2 = "mundo "
valor = soma(numero1,numero2)
print('Soma :' + str(valor) + '\n\n')

"""
Trecho com erro
"""
numero1 = "Oi "
numero2 = 4.2198
valor = soma(numero1,numero2)
print('Soma :' + str(valor) + '\n\n')

