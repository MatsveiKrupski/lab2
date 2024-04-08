//
// Created by mrkru on 07.04.2024.
//

#include <iostream>
#include "view.h"
using namespace std;

void View::printStartHeader() {
    cout << "Podstawowy kliker. Kliknij 'b',zeby dostac point. Nicsnij 'e', zeby wyjsc" << endl;
    cout << "Kliknij 's' - zapisac postep, 'l' - zaladuj zapisany postep." << endl;
}

void View::printData(int points, int levels) {
    cout << "Poziom: " << levels << endl << "Pointow: " << points << endl;// << "//////////////////////" << endl;
}
char View::getUserInput() {
    char dane;
    cout << "//////////////////////" << endl << "Kliknij!" << endl << "--->";
    cin >> dane;
    return dane;
}