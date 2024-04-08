#include <iostream>
#include <fstream>
#include "model.h"
#include "view.h"
#include "controller.h"

using namespace std;

int main() {
    Model mymodel; View myview;
    Controller gra(mymodel,myview);

    gra.launch();

    return 0;
}
