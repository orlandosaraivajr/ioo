#!/usr/bin/python3
# coding: utf-8
"""Classe Governador """

from Politico import Politico

class Governador(Politico):
    """ Classe Senador """

    def __init__(self, nome, partido, estado):
        """ Construtor da classe Governador"""
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado(estado)
        self.set_funcao("administrar bem o ICMS para o bem do estado.")

    def apresentacao(self):
        Politico.apresentacao(self)
        print ('sou Governador ')
        print ('Minha função é ' + self.get_funcao())
        print ('Fui eleito por ' + self.get_estado())
        print ('============================')
