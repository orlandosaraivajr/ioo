#!/usr/bin/python3
# coding: utf-8
"""Válvula de alimentacao"""


class ValvulaAlimentacao():
    """Válvula de alimentacao"""

    def __init__(self):
        """ Construtor """
        print("Construtor da válvula de alimentação")
        self.capacidade_vazao = 1.1

    def __del__(self):
        """ Destrutor """
        print("Removendo válvula de alimentação: endereco {}".format(id(self)))

    def encher_agua(self):
        """ Descarga inteligente. Opção 1: pipi Opção 2: popô """
        print("Vazão :" + str(self.capacidade_vazao) + " litros/seg")

    def get_vazao(self):
        """ Retorna a capacidade de vazão do vaso. """
        return self.capacidade_vazao

