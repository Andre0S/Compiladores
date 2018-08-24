#include "main.h"

int main() {
    std::string code = "12 + 3 +25 -45 a";
    Lexer lexer(code);
    try {
        std::list<Token*> toPrint = lexer.tokens();
        while (!toPrint.empty()) {
            std::cout << (*toPrint.front()).toString() << std::endl;
            toPrint.pop_front();
        }
    } catch (exceptionNotADigit e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}