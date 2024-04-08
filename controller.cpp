//
// Created by mrkru on 07.04.2024.
//

#include <iostream>
#include "controller.h"
using namespace std;


Controller::Controller(Model &model, View &view): model(&model), view(&view) {
}

void Controller::launch() {
    std::cout << "Uruchomienie programu";

    int wynik;

    view->printStartHeader();
    view->printData(model->getPoints(), model->getLevels());

    while (true){
        wynik = model->przechwyt(view->getUserInput());
        if (wynik==0){
            char czy;
            while (true){
                cout << "Czy chcesz zapisac postep? (y/n)" << endl << "---> ";
                cin >> czy;
                if (czy=='y') {
                    model->saveData();
                    cout << "Wylaczanie programu" << endl;
                    break;
                }
                else if (czy=='n') {
                    cout << "Wylaczanie programu" << endl;
                    break;
                }
                else {
                    cout << "Nieporawne znaczenie!" << endl;
                }
            }
            break;
        }
        else if (wynik==1){
            model->addPoint();
            if (model->getPoints()%5==0){
                model->addLevel();
            }
            view->printData(model->getPoints(), model->getLevels());
        }
        else if (wynik==2){
            model->saveData();
        }
        else if (wynik==3){
            model->loadData();
            view->printData(model->getPoints(), model->getLevels());
            //cout << "//////////////////////" << endl;
        }
        else continue;
    }
}
