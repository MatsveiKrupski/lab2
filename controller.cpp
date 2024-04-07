//
// Created by mrkru on 07.04.2024.
//

#include <iostream>
#include "controller.h"

Controller::Controller(Model &model, View &view): model(&model), view(&view) {
}

void Controller::launch() {
    std::cout << "Uruchomienie programu";

    int wynik;

    view->printStartHeader();
    view->printData(model->getPoints());

    while (true){                   //caly while wrzucic w kontroller
        wynik = model->przechwyt(view->getUserInput());
        if (wynik==0){
            std::cout << "Wylaczanie programu";
            break;
        }
        else if (wynik==1){
            model->addPoint();
            view->printData(model->getPoints());
        }
        else continue;
    }
}
