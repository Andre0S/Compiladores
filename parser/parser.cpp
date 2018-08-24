//
// Created by Andre on 24/08/2018.
//

#include "parser.h"

void Parser::move() throw(exceptionNotADigit){
    tkn = (*lxr).getNextToken();
};

void Parser::match(int toBeTested) throw(exceptionNotADigit) {
    if ((*tkn).tag == toBeTested) {
        move();
    } else {
        throw "";
    }
}
