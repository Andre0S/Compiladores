//
// Created by Andre on 23/08/2018.
//

#ifndef COMPILADORES_EXCEPTIONNOTADIGIT_H
#define COMPILADORES_EXCEPTIONNOTADIGIT_H

#include <exception>
#include <string>

class exceptionNotADigit : public std::exception {
public:
    virtual const char* what() const throw() override
    {
        return "Wrong value, not a digit!";
    }
};

class exceptionNotAnOperator : public std::exception {
public:
    virtual const char* what() const throw() override
    {
        return "Wrong character, not an operator!";
    }
};

class exceptionNotWhatExpected : public std::exception {
private:
    std::string error;
public:
    exceptionNotWhatExpected (std::string fst, std::string snd) throw() : exception() {
        error = "Wrong token, expected " + fst + ", but was given " + snd;
    }
    virtual const char* what() const throw() override
    {
        return error.c_str();
    }
};

#endif //COMPILADORES_EXCEPTIONNOTADIGIT_H
