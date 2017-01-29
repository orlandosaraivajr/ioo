#!/usr/bin/python3
# coding: utf-8
"""Classe Vereador """

from Politico import Politico

class Vereador(Politico):
    """ Classe Senador """

    def __init__(self, nome, partido, municipio, estado):
        """ Construtor da classe Vereador"""
        Politico.__init__(self)
        self.set_nome(nome)
        self.set_partido(partido)
        self.set_estado(estado)
        self.__municipio = municipio
        self.set_funcao("propor leis municipais em benefício da população.")

    def set_municipio(self, municipio):
        """ Setar o municipio do político. """
        if type(municipio) == str:
            self.__municipio = municipio

    def get_municipio(self):
        """ Retorna o nome municipio do político. """
        return self.__municipio

    def apresentacao(self):
        Politico.apresentacao(self)
        print ('sou vereador: ' + self.get_municipio() + '/' + self.get_estado())
        print ('Minha função é ' + self.get_funcao())
        print ('Fui eleito por ' + self.get_estado())
        print ('============================')
