#!/usr/bin/python3
# coding: utf-8
"""Classe Senador """

from Politico import Politico

class Senador(Politico):
    """ Classe Senador """

    def __init__(self, nome, partido, estado):
        """ Construtor da classe Senador"""
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado(estado)
        self.set_funcao("propor no Senado leis em benefício da população.")

    def apresentacao(self):
        Politico.apresentacao(self)
        print ('sou senador ')
        print ('Minha função é ' + self.get_funcao())
        print ('Fui eleito por ' + self.get_estado())
        print ('============================')
