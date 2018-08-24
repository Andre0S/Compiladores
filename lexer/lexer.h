//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_LEXER_H
#define COMPILADORES_LEXER_H

#include "num.h"
#include "operator.h"
#include "exceptions.h"
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

    Token* scan() throw(exceptionNotADigit);

    Token* getNextToken() throw(exceptionNotADigit);

    std::list<Token*> tokens() throw(exceptionNotADigit);

};

#endif //COMPILADORES_LEXER_H
