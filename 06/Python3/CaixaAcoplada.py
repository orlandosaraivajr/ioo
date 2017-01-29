#!/usr/bin/python3
# coding: utf-8
"""Classe CaixaAcoplada """

from AlavancaAcionamento import AlavancaAcionamento
from ValvulaAlimentacao import ValvulaAlimentacao
from ComportaVedacao import ComportaVedacao


class CaixaAcoplada(object):
    """ Caixa acoplada do vaso sanitário """

    def __init__(self):
        """ Construtor instancia outros objetos, seta o nível """
        print("Construtor da caixa do vaso sanitário")
        self.alavanca = AlavancaAcionamento()
        self.valvula = ValvulaAlimentacao()
        self.comporta = ComportaVedacao()
        self.nivel_maximo = 6.0  
        self.nivel_agua = 0
        self.encher_caixa()

    def __del__(self):
        """ Destrutor """
        print("Removendo caixa Acoplada: endereco {}".format(id(self)))

    def encher_caixa(self):
        """ Encher a caixa de água """
        print("Encher a caixa d'água.")
        while self.nivel_agua < self.nivel_maximo:
            self.nivel_agua = self.nivel_agua + self.valvula.get_vazao()
            if self.nivel_agua > self.nivel_maximo:
                self.nivel_agua = self.nivel_maximo
            print("Nível de água: " + str(round(self.nivel_agua,2)))

    def acionar(self, opcao=None):
        """ Acionar a descarga. """
        print("Acionado o vaso sanitário.")

        if type(opcao) == int:
            if opcao == 1:
                print("Número 1. Gastar pouca água")
                self.alavanca.acionar(opcao)
                self.comporta.abrir()
                self.nivel_agua = self.nivel_maximo / 2
                self.comporta.fechar()
                self.valvula.encher_agua()
                self.encher_caixa()
            elif opcao == 2:
                print("Número 2. ")
                self.alavanca.acionar(opcao)
                self.comporta.abrir()
                self.nivel_agua = 0
                self.comporta.fechar()
                self.valvula.encher_agua()
                self.encher_caixa()
            else:
                print("Opção desconhecida.")
        else:
            print("Não é o vaso inteligente..")
            self.alavanca.acionar()
            self.comporta.abrir()
            self.nivel_agua = 0
            self.comporta.fechar()
            self.valvula.encher_agua()
            self.encher_caixa()

    def relatorio(self):
        """ Método para emitir relatório de uso. """
        self.alavanca.relatorio()

