# Project Overview
This project implements a Lexical Analyzer (LA) for the C++ language using Flex. The LA reads input from a source file and generates required tokens, which are then stored in an output file along with their token_id, token, and line number.


# Features
Tokenizes input source files into various tokens such as:
Integers
Floats
Characters
Keywords (e.g. if, else, for, while)
Identifiers
Invalid tokens
Outputs tokens to a file with their corresponding token_id, token, and line number

# Requirements
Flex installed on your system
Flex added to your system's PATH

# Usage
Install Flex and add it to your system's PATH
Open terminal and go to the directory where the lexer.l file is located.
Type 'flex lexer.l'
This should generate a 'lex.yy.c' file
Type 'gcc lex.yy.c -o output'
Then type './output input.cpp' (input.cpp can be any file you want to tokenize)
