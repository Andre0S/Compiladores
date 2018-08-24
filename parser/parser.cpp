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
        throw exceptionNotWhatExpected(std::to_string(toBeTested),std::to_string((*tkn).tag));
    }
}

void Parser::term() throw(exceptionNotADigit,exceptionNotWhatExpected) {
    int auxiliary = (*tkn).tag;
    if (auxiliary == tagger.NUM) {
        Num* n = (Num*) tkn;
        std::cout << (*n).value << std::endl;
        move();
    } else {
        throw exceptionNotWhatExpected("number",(*tkn).toString());
    }
}

void Parser::expr() throw(exceptionNotADigit,exceptionNotWhatExpected) {
    try {
        term();
    } catch (exceptionNotADigit e) {
        std::cout << e.what() << std::endl;
    } catch (exceptionNotWhatExpected e) {
        std::cout << e.what() << std::endl;
    }
    while (true) {
        if ((*tkn).tag == tagger.OPERATOR) {
            Operator* op = (Operator*) tkn;
            std::cout << (*op).value << std::endl;
            try {
                term();
            } catch (exceptionNotADigit e) {
                std::cout << e.what() << std::endl;
            } catch (exceptionNotWhatExpected e) {
                std::cout << e.what() << std::endl;
            }
        } else if ((*tkn).tag == tagger.EndOF) {
            return;
        } else {
            std::cout << "Expected +, - or EOF." << std::endl;
        }
    }
}
