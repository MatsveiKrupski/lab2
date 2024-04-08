#include "model.h"
#include <iostream>
#include <fstream>

using namespace std;

Model::Model() {
    points = 0;
}

int Model::getPoints() const {
    return points;
}

void Model::addPoint() {
    points++;
}

int Model::getLevels() const {
    return levels;
}

void Model::addLevel() {
    levels++;
}

int Model::przechwyt(char dane) {
    switch (dane) {
        case 'e':
            return 0;
            break;
        case 'b':
            return 1;
            break;
        case 's':
            return 2;
            break;
        case 'l':
            return 3;
            break;
        default:
            return -1;
    }

//    if (dane=='e'){
//        return 0;
//    }
//    else if (dane=='b'){
//        return 1;
//    }
//    else return 2;
}
void Model::saveData(){
    ofstream plik;
    plik.open("gameData.txt");
    if (plik.good())
    {
        //cout << "Uzyskano dostep do pliku" << endl;
        plik << levels << " " << points;
        cout << "Dane zostaly zapisane" << endl; // << "//////////////////////" << endl;
        plik.close();
    }
    else
        cout << "Blad otwarcia pliku";
}
void Model::loadData(){
    ifstream plik;
    plik.open("gameData.txt");
    if (plik.good())
    {
        //cout << "Uzyskano dostep do pliku" << endl;
        plik >> levels >> points;
        cout << "Dane zostaly zaktualizowane" << endl;
        plik.close();
    }
    else
        cout << "Blad otwarcia pliku";
}