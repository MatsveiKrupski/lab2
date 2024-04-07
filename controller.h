//
// Created by mrkru on 07.04.2024.
//

#ifndef LAB2_CONTROLLER_H
#define LAB2_CONTROLLER_H

#include "model.h"
#include "view.h"

class Controller{
private:
    Model *model;
    View *view;
public:
    Controller(Model &model, View &view);
    void launch() ;
};

#endif //LAB2_CONTROLLER_H
