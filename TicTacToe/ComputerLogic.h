//
// Created by Felix on 06.02.20.
//

#include "StructDefinitions.h"

#ifndef TICTACTOE_COMPUTERLOGIC_H
#define TICTACTOE_COMPUTERLOGIC_H

extern int SPIELFELDGROESSE;

KOORDINATE getCoordinateForComputer(KOORDINATE Feld[SPIELFELDGROESSE][SPIELFELDGROESSE]);
//KOORDINATE getFirstFreePlace(KOORDINATE Feld[SPIELFELDGROESSE][SPIELFELDGROESSE]);
KOORDINATE getRandomPlace(KOORDINATE Feld[SPIELFELDGROESSE][SPIELFELDGROESSE]);

#endif //TICTACTOE_COMPUTERLOGIC_H
