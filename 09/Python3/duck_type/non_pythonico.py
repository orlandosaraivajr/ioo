#!/usr/bin/python3
# coding: utf-8

from duckType import *

def encontrarPato(animal):
    """Descobrir se o animal é pato ou não."""
    if isinstance(animal, Pato):
        animal.nadar()
        animal.som()

if __name__ == "__main__":
    Animais = {}
    Animais['Pato'] = Pato()
    Animais['Donald'] = Donald()
    Animais['Pluto'] = Pluto()
    Animais['PatinhoFeio'] = PatinhoFeio()

    for chave, valor in Animais.items():
        print ("Animal: " + chave)
        encontrarPato(valor)
        print ("")
