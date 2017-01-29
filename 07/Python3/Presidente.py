#!/usr/bin/python3
# coding: utf-8
"""Classe Presidente """

from Politico import Politico

class Presidente(Politico):
    """ Classe Presidente """

    def __init__(self, nome, partido):
        """ Construtor da classe Presidente """
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado("")
        self.set_funcao("administrar bem os impostos federais em prol do País.")
