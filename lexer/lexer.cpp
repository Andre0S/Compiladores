//
// Created by Andre on 23/08/2018.
//

#include "lexer.h"

int Lexer::getLine() {
    return line;
};

int Lexer::getColumn() {
    return column;
};

Token* Lexer::scan() {
    while (position < inputLength) {
        peek = input[position];

        switch (peek) {
            case ' ':
            case '\t':
                column++;
                position++;
                break;
            case '\n':
                column=0;
                line++;
                position++;
                break;
            case '+':
                position++;
                column++;
                return new Id("+",tag);
            case '-':
                position++;
                column++;
                return new Id("-",tag);
            default:
                if (isdigit(peek)) {
                    std::string auxiliar;
                    do {
                        auxiliar += peek;
                        position++;
                        column++;
                        if (position < inputLength) {
                            peek = input[position];
                        } else {
                            peek = ' ';
                        }
                    } while (isdigit(peek));
                    return new Num(std::stoi(auxiliar),tag);
                } else {
                    throw new exceptionNotADigit;
                }
                break;
        }
    }
    return new Token(tag.EndOF);
};

Token* Lexer::getNextToken() {
    try {
        return scan();
    } catch (exceptionNotADigit e) {
        throw e;
    }
};

std::list<Token*> Lexer::tokens() {
    std::list<Token*> returner;
    try {
        for (Token* tkn = getNextToken(); (*tkn).tag != tag.EndOF; tkn = getNextToken()) {
            returner.push_back(tkn);
        }
    } catch (exceptionNotADigit e) {
        throw e;
    }
    position = 0;
    column =0;
    line=1;
    return returner;
};

