//
// Created by Andre on 24/08/2018.
//

#ifndef COMPILADORES_PARSER_H
#define COMPILADORES_PARSER_H

#include "../lexer/lexer.h"
#include <iostream>

class Parser {

private:

    Lexer* lxr = new Lexer(" ");
    Token* tkn;
    Tag tagger;

    void move() throw(exceptionNotADigit);

    void match(int toBeTested) throw(exceptionNotADigit);

    void term() throw(exceptionNotADigit,exceptionNotWhatExpected);

public:

    Parser(Lexer lexer) {
        lxr = &lexer;
        move();
    }

    void expr() throw(exceptionNotADigit,exceptionNotWhatExpected);

};


#endif //COMPILADORES_PARSER_H
