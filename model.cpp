#include "model.h"

Model::Model() {
    points = 0;
}

int Model::getPoints() const {
    return points;
}

void Model::addPoint() {
    points++;
}

int Model::przechwyt(char dane) {
    if (dane=='e'){
        return 0;
    }
    else if (dane=='b'){
        return 1;
    }
    else return 2;
}