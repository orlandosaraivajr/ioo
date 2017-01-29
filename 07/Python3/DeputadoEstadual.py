#!/usr/bin/python3
# coding: utf-8
"""Classe DeputadoEstadual """

from Politico import Politico


class DeputadoEstadual(Politico):
    """ Classe Deputado Estadual """

    def __init__(self, nome, partido, estado):
        """ Construtor da classe DeputadoEstadual """
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado(estado)
        self.set_funcao("propor as leis estaduais de interesse da população ")

    def apresentacao(self):
        super(DeputadoEstadual, self).apresentacao()
        print ('sou deputado estadual')
        print ('Minha função é ' + self.get_funcao())
        print ('Fui eleito por ' + self.get_estado())
        print ('============================')

