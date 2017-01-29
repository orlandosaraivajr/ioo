#!/usr/bin/python3
# coding: utf-8
"""Classe Politico """

class Politico():
    """ Classe Politico """

    def __init__(self):
        """ Construtor da classe Político """
        self.__nome = ""
        self.__partido = ""
        self.__estado = ""
        self.__funcao = ""

    def set_nome(self, nome):
        """ Setar o nome do político. """
        if type(nome) == str:
            self.__nome = nome

    def get_nome(self):
        """ Retorna o nome do político. """
        return self.__nome

    def set_partido(self, partido):
        """ Setar o partido do político. """
        if type(partido) == str:
            self.__partido = partido

    def get_partido(self):
        """ Retorna o partido do político. """
        return self.__partido

    def set_estado(self, estado):
        """ Setar o estado (UF) do político. """
        if type(estado) == str:
            self.__estado = estado

    def get_estado(self):
        """ Retorna o estado (UF) do político. """
        return self.__estado

    def set_funcao(self, funcao):
        """ Setar a funcao do político. """
        if type(funcao) == str:
            self.__funcao = funcao

    def get_funcao(self):
        """ Retorna a funcao do político. """
        return self.__funcao

    def apresentacao(self):
        """ Realiza a apresentação do Político. """
        print ('Olá, sou ' + self.get_nome())
        print ('Meu partido é ' + self.get_partido())
