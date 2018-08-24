cmake_minimum_required(VERSION 3.12)
project(Compiladores)

set(CMAKE_CXX_STANDARD 14)

add_executable(Compiladores main.cpp lexer/lexer.cpp lexer/token.cpp lexer/tag.cpp lexer/num.cpp lexer/token.h lexer/num.h lexer/tag.h main.h lexer/lexer.h lexer/exceptions.cpp lexer/exceptions.h lexer/operator.h lexer/operator.cpp parser/parser.cpp parser/parser.h)