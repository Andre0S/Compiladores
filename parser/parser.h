//
// Created by Andre on 24/08/2018.
//

#ifndef COMPILADORES_PARSER_H
#define COMPILADORES_PARSER_H

#include "../lexer/lexer.h"

class Parser {

private:

    Lexer* lxr = new Lexer(" ");
    Token* tkn;

    void move() throw(exceptionNotADigit);

    void match(int toBeTested) throw(exceptionNotADigit);

    void term();

public:

    Parser(Lexer lexer) {
        lxr = &lexer;
        move();
    }

    void expr();

};


#endif //COMPILADORES_PARSER_H
