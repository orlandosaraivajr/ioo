// Main.cpp
#include <iostream>
#include <string>

#include "includes/Presidente.h"
#include "includes/Senador.h"
#include "includes/DeputadoFederal.h"

#include "includes/Governador.h"
#include "includes/DeputadoEstadual.h"

#include "includes/Prefeito.h"
#include "includes/Vereador.h"

using namespace std;

int main() {
    Presidente *pres = NULL;
    Senador *sen = NULL;
    DeputadoFederal *depFed = NULL;
    DeputadoEstadual *defEst = NULL;
    Governador *gov = NULL;
    Prefeito *pref = NULL;
    Vereador *vered = NULL;

    pres = new Presidente("Frank Underwood","Partido House of Cards");
    sen = new Senador("Michael Kern","Partido House of Cards","US");
    depFed = new DeputadoFederal("Diogo Fraga","Partido da Tropa II","RJ");

    gov = new Governador("Jim Matthews","Partido House of Cards","Pensilvânia");
    defEst = new DeputadoEstadual("Fortunato","Partido da Tropa II","RJ");

    pref = new Prefeito("Odorico Paraguaçu","Partido do Povo","Sucupira","BA");
    vered = new Vereador("Doroteia","Partido do Povo","Sucupira","BA");

    pres->apresentacao();
    sen->apresentacao();
    depFed->apresentacao();
    gov->apresentacao();
    defEst->apresentacao();
    pref->apresentacao();
    vered->apresentacao();
    return 0;
}
