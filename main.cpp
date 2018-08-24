#include "main.h"

int main() {
    std::string code = "12 + 3 +25 -45 a";
    Lexer lexer(code);
    Parser parser(lexer);
    parser.expr();
    return 0;
}