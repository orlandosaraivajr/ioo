#!/usr/bin/python3
# coding: utf-8
"""Válvula de alimentacao"""


class ValvulaAlimentacao():
    """Válvula de alimentacao"""
    nivel_maximo = 6.0
    nivel_agua = 0

    def __init__(self):
        """ Construtor """
        print("Construtor da válvula de alimentação")
        self.capacidade_vazao = 1.1
        self.encher_caixa()

    def __del__(self):
        """ Destrutor """
        print("Removendo válvula de alimentação: endereco {}".format(id(self)))

    def esvaziar(self):
        """ Esvaziar a caixa acoplada """
        self.nivel_agua = 0

    def encher_caixa(self):
        """ Encher a caixa de água """
        print("Encher a caixa d'água.")
        while self.nivel_agua < self.nivel_maximo:
            self.nivel_agua = self.nivel_agua + self.get_vazao()
            if self.nivel_agua > self.nivel_maximo:
                self.nivel_agua = self.nivel_maximo
            print("Nível de água: " + str(round(self.nivel_agua,2)))

    def encher_agua(self):
        """ Descarga inteligente. Opção 1: pipi Opção 2: popô """
        print("Vazão :" + str(self.capacidade_vazao) + " litros/seg")

    def get_vazao(self):
        """ Retorna a capacidade de vazão do vaso. """
        return self.capacidade_vazao
