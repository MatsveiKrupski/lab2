#include <iostream>

using namespace std;

int przechwyt(char dane) {
    if (dane=='e'){
        return 0;
    }
    else if (dane=='b'){
        return 1;
    }
    else return 2;
}

class Model{
private:
    int points;
public:
    Model();
    void addPoint();
    int getPoints() const;
    //int przechwyt(char dane);
};

Model::Model() {
    points = 0;
}

int Model::getPoints() const {
    return points;
}

void Model::addPoint() {
    points++;
}

class View{
public:
    void printStartHeader();
    void printData(int points);
    char getUserInput();
};

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

class Controller: public Model, public View{
public:
    Controller(Model&, View&);
    void launch();
};

Controller::Controller(Model &, View &) {
}

void Controller::launch() {
    cout << "Uruchomienie programu";
}


int main() {
    int wynik;
    Model m; View v;
    Controller gra(m,v);

    gra.launch();
    gra.printStartHeader();
    gra.printData(gra.getPoints());

    while (true){
        wynik = przechwyt(gra.getUserInput());
        if (wynik==0){
            cout << "Wylaczanie programu";
            break;
        }
        else if (wynik==1){
            gra.addPoint();
            gra.printData(gra.getPoints());
        }
        else continue;
    }
    return 0;
}
