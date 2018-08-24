//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_EXCEPTIONNOTADIGIT_H
#define COMPILADORES_EXCEPTIONNOTADIGIT_H

#include <exception>

class exceptionNotADigit : public std::exception {
    virtual const char* what() const throw() override
    {
        return "Wrong value, not a digit!";
    }
};


#endif //COMPILADORES_EXCEPTIONNOTADIGIT_H
