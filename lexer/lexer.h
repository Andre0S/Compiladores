//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_LEXER_H
#define COMPILADORES_LEXER_H

#include "num.h"
#include "id.h"
#include "exceptionNotADigit.h"
#include <list>

class Lexer {

private:

    int column, line, position, inputLength;
    std::string input;
    char peek;
    Tag tag;

public:

    Lexer(std::string str) {
        input = str;
        inputLength = str.length();
        column = 0;
        line = 1;
        position = 0;
        peek = ' ';
    }

    int getLine();

    int getColumn();

    Token* scan();

    Token* getNextToken();

    std::list<Token*> tokens();

};

#endif //COMPILADORES_LEXER_H
