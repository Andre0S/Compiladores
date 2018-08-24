//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_NUM_H
#define COMPILADORES_NUM_H

#include "token.h"
#include "tag.h"

class Num : public Token {

public:

    int value;

    Num(int valor, Tag dictionary) : Token(dictionary.NUM) {
        value = valor;
    }

    virtual std::string toString() override;

};

#endif //COMPILADORES_NUM_H
