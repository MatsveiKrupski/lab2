//
// Created by mrkru on 07.04.2024.
//

#ifndef LAB2_MODEL_H
#define LAB2_MODEL_H

class Model{
private:
    int points;
public:
    Model();
    void addPoint();
    int getPoints() const;
    int przechwyt(char dane);
};

#endif //LAB2_MODEL_H
