#!/usr/bin/python3
# coding: utf-8
"""Classe CaixaAcoplada """

from AlavancaAcionamento import AlavancaAcionamento

class CaixaAcoplada(object):
    """ Caixa acoplada do vaso sanitário """

    def __init__(self):
        """ Construtor instancia outros objetos, seta o nível """
        print("Construtor da caixa do vaso sanitário")
        self.alavanca = AlavancaAcionamento()

    def __del__(self):
        """ Destrutor """
        print("Removendo caixa Acoplada: endereco {}".format(id(self)))

    def acionar(self, opcao=None):
        """ Acionar a descarga. """
        print("Acionado o vaso sanitário.")

        if type(opcao) == int:
            if opcao == 1:
                print("Número 1. Gastar pouca água")
                self.alavanca.acionar(opcao)
            elif opcao == 2:
                print("Número 2. ")
                self.alavanca.acionar(opcao)
            else:
                print("Opção desconhecida.")
        else:
            print("Não é o vaso inteligente..")
            self.alavanca.acionar()

    def relatorio(self):
        """ Método para emitir relatório de uso. """
        self.alavanca.relatorio()
