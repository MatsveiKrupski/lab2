//
// Created by mrkru on 07.04.2024.
//

#include <iostream>
#include "view.h"
using namespace std;

void View::printStartHeader() {
    cout << "Podstawowy kliker. Kliknij 'b',zeby dostac point. Nicsnij 'e', zeby wyjsc" << endl;
}

void View::printData(int points) {
    cout << "Masz teraz " << points << " pointow!" << endl;
}
char View::getUserInput() {
    char dane;
    cout << "Kliknij! : ";
    cin >> dane;
    return dane;
}