//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_TOKEN_H
#define COMPILADORES_TOKEN_H

#include <string>

class Token {

public:

    int tag;

    Token(int n) {
        tag = n;
    };

    virtual std::string toString();

};

#endif //COMPILADORES_TOKEN_H