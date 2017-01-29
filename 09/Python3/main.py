#!/usr/bin/python3
# coding: utf-8
""" Exemplo do uso de classe Abstrata. """
from matrix import *

if __name__ == "__main__":
    Pessoas = []
    for i in range(5):
        print ("Escolha : \n 1) Empresário \t 2) Professor \t 3) Advogado ")
        profissao = input()
        if profissao == '1':
            nome = input("Digite o nome: ")
            empresa = input("Digite a empresa: ")
            obj = Executivo(nome, empresa)
        elif profissao == '2':
            nome = input("Digite o nome do professor: ")
            escola = input("Digite a escola: ")
            obj = Professor(nome, escola)

        else:
            nome = input("Digite o nome: ")
            oab = input("Digite o número OAB: ")
            obj = Advogado(nome, oab)
        Pessoas.append(obj)

    for i in range(5):
        Pessoas[i].apresentacao()

    Pessoas[2].mode_on()
    Pessoas[4].mode_on()
    print('====================')
    for i in range(5):
        Pessoas[i].apresentacao()

