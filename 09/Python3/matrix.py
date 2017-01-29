#!/usr/bin/python3
# coding: utf-8
""" Módulo Matrix. """
import abc


class Agente(metaclass=abc.ABCMeta):
    """ Classe abstrata Agente. """
    modo_agente = False

    def mode_on(self):
        """ Método para ativação do agente. """
        self.modo_agente = True

    @abc.abstractmethod
    def __init__(self, nome):
        """ Construtor abstrado da classe base. """
        self.nome = nome

    @abc.abstractmethod
    def apresentacao(self):
        """ Método de Apresentacao. """
        if self.modo_agente:
            print ('Oi, sou o Agente Smith')
        else:
            print ('Olá ! Meu nome é ' + str(self.nome))


class Executivo(Agente):
    """ Classe Executivo. """
    def __init__(self, nome, empresa):
        Agente.__init__(self, nome)
        self.empresa = empresa
        self.profissao = "Executivo"

    def apresentacao(self):
        Agente.apresentacao(self)
        print ('Sou executivo(a) na empresa ' + str(self.empresa))


class Professor(Agente):
    """ Classe Professor. """
    def __init__(self, nome, escola):
        Agente.__init__(self, nome)
        self.escola = escola
        self.profissao = "Professor"

    def apresentacao(self):
        Agente.apresentacao(self)
        print ('Sou professor(a) na escola ' + str(self.escola))


class Advogado(Agente):
    """ Classe Advogado. """
    def __init__(self, nome, oab):
        Agente.__init__(self, nome)
        self.oab = oab
        self.profissao = "Advogado"

    def apresentacao(self):
        Agente.apresentacao(self)
        print ('Sou advogado(a). Meu OAB: ' + str(self.oab))

