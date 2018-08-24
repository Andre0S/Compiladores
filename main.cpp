#include "main.h"

int main() {
    std::string code = "12 + 3 +25 -45";
    Lexer lexer(code);
    try {
        std::list<Token*> toPrint = lexer.tokens();
        while (!toPrint.empty()) {
            std::cout << (*toPrint.front()).toString() << std::endl;
            toPrint.pop_front();
        }
    } catch (exceptionNotADigit e) {
        std::cout << "There is a non digit!" << std::endl;
    }
    return 0;
}