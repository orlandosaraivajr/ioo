#!/usr/bin/python3
# coding: utf-8
#
# Programa: cadastro
"""Cadastro de Pessoa"""


class Pessoa(object):
    """ Classe Pessoa: responsável em armazenar dados de uma pessoa. """

    __nome = ""
    __idade = -1
    __sexo = ''

    def __init__(self):
        """ Construtor Python. """

    def cadastra(self):
        """ Método cadastra: permite receber os dados de uma pessoa. """
        self.__nome = input("Digite o seu nome: ")
        while self.__idade < 0:
            try:
                self.__idade = int(input("Digite sua idade: "))
            except ValueError:
                print("\t\tDigite número inteiro !")
        self.__sexo = input("Sexo: M para masculino ou F para feminino: ")
        self.__sexo = self.__sexo.upper()
        if self.__sexo != 'F':
            self.__sexo = 'M'

    def mostra(self):
        """ Método mostra: apresenta os dados cadastrados de uma pessoa. """
        if self.__sexo == 'F' and self.__idade > 30:
            print(self.__nome + '\t idade secreta \t ' + self.__sexo)
        else:
            print(self.__nome + '\t' + str(self.__idade) + '\t' + self.__sexo)

PESSOAS = list()
for i in range(0, 3):
    OBJ = Pessoa()
    OBJ.cadastra()
    PESSOAS.append(OBJ)

for PESSOA in PESSOAS:
    PESSOA.mostra()
"""print ('Linha 46 ' + str(PESSOAS))
print ('Linha 47 ' + str(PESSOAS[0]))
print ('Linha 48 ' + str(PESSOAS[0].__dict__))
print ('Linha 49 ' + str(PESSOAS[0].__dict__.keys()))
print ('Linha 50 ' + str(PESSOAS[0].__dict__.values()))
PESSOAS[0]._Pessoa__idade = 'BlaBlaBla'
print ('Linha 52  ' + str(PESSOAS[0]._Pessoa__idade))
PESSOAS[0]._Pessoa__apelido = 'Cabeção'
print ('Linha 54 ' + str(PESSOAS[0].__dict__))

"""