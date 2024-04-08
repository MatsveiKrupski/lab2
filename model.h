//
// Created by mrkru on 07.04.2024.
//

#ifndef LAB2_MODEL_H
#define LAB2_MODEL_H

class Model{
private:
    int points;
    int levels;
public:
    Model();
    void addPoint();
    int getPoints() const;
    void addLevel();
    int getLevels() const;
    int przechwyt(char dane);
    void saveData();
    void loadData();
};

#endif //LAB2_MODEL_H
