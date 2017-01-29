#!/usr/bin/python3
# coding: utf-8
"""Classe DeputadoFederal """

from Politico import Politico

class DeputadoFederal(Politico):
    """ Classe Deputado Federal """

    def __init__(self, nome, partido, estado):
        """ Construtor da classe DeputadoFederal """
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado(estado)
        self.set_funcao("propor na Câmara leis federais em benefício da população.")

    def apresentacao(self):
        super(DeputadoFederal, self).apresentacao()
        print ('sou deputado federal')
        print ('Minha função é ' + self.get_funcao())
        print ('Fui eleito por ' + self.get_estado())
        print ('============================')
