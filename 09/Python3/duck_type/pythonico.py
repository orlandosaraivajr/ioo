#!/usr/bin/python3
# coding: utf-8

from duckType import *

def encontrarPato(animal):
    try:
        animal.nadar()
        animal.som()
    except AttributeError as e:
        print(e)

if __name__ == "__main__":
    dict = {}
    dict['Pato'] = Pato()
    dict['Donald'] = Donald()
    dict['Pluto'] = Pluto()
    dict['PatinhoFeio'] = PatinhoFeio()

    for chave, valor in dict.items():
        print("Animal: " + chave)
        encontrarPato(valor)
        print("")
