#!/usr/bin/python3
# coding: utf-8
""" Exemplo do uso de herança. """

from Presidente import Presidente
from Senador import Senador
from DeputadoFederal import DeputadoFederal
from Governador import Governador
from DeputadoEstadual import DeputadoEstadual
from Prefeito import Prefeito
from Vereador import Vereador

PRES = Presidente("Frank Underwood","Partido House of Cards")
SEN = Senador("Michael Kern","Partido House of Cards","US")
DEP_F = DeputadoFederal("Diogo Fraga","Partido da Tropa II","RJ")
GOV = Governador("Jim Matthews","Partido House of Cards","Pensilvânia")
DEP_E = DeputadoEstadual("Fortunato","Partido da Tropa II","RJ")
PREF = Prefeito("Odorico Paraguaçu","Partido do Povo","Sucupira","BA")
VERED = Vereador("Doroteia","Partido do Povo","Sucupira","BA")

PRES.apresentacao()
SEN.apresentacao()
DEP_F.apresentacao()
GOV.apresentacao()
DEP_E.apresentacao()
PREF.apresentacao()
VERED.apresentacao()
