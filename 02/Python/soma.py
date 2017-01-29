#!/usr/bin/python3
# coding: utf-8

def soma(numero_01, numero_02):
    return numero_01 + numero_02
	

numero_1 = 3
numero_2 = 4
valor = soma(numero_1,numero_2)
print('Soma :' + str(valor) + '\n\n')

numero_2 = 4.2198
valor = soma(numero_1,numero_2)
print('Soma :' + str(valor) + '\n\n')

numero_1 = "Oi "
numero_2 = "mundo "
valor = soma(numero_1,numero_2)
print('Soma :' + str(valor) + '\n\n')

"""
Trecho com defeito
"""
numero_1 = "Oi "
numero_2 = 4.2198
valor = soma(numero_1,numero_2)
print('Soma :' + str(valor) + '\n\n')

