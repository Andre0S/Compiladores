//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_ID_H
#define COMPILADORES_ID_H

#include "token.h"
#include "tag.h"

class Id : public Token {

public:

    std::string value;

    Id(std::string valor, Tag dictionary) : Token(dictionary.ID) {
        value = valor;
    }

    virtual std::string toString() override;

};

#endif //COMPILADORES_NUM_H
