#!/usr/bin/python3
# coding: utf-8
""" Classe comporta de vedação."""


class ComportaVedacao(object):
    """comporta de vedação"""

    def __init__(self):
        """ Construtor """
        print("Construtor da comporta de vedação")
        self.status = "FECHADO"

    def __del__(self):
        """ Destrutor """
        print("Removendo comporta de vedação: endereco {}".format(id(self)))

    def abrir(self, vazao=None):
        """ Abertura da comporta de vedação. """
        if vazao == None:
            print("Comporta de vedação aberta. Saindo toda de água.")
        else:
            print("Comporta aberta. Saindo "+ str(vazao) + "de água.")

        self.status = "ABERTO"

    def fechar(self):
        """ Fechamento da comporta de vedação. Água Saindo... """
        print("Comporta de vedação fechada.")
        self.status = "FECHADO"

    def get_status(self):
        """ Status da comporta de vedação.( Aberta ou fechada ) """
        return self.status

