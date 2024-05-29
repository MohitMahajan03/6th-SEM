#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <vector>
#include <cstring>
using namespace std;

class lex_analyse
{
    private:
        unordered_map <char, string> ops = {
            {'+', "Addition"},
            {'-', "Subtraction"},
            {'*', "Multiplication"},
            {'/', "Division"},
            {'=', "Assignment"}
        };

        unordered_map <string, string> kw = {
            {"if", "if"},
            {"else", "else"},
            {"elif", "elif"},
            {"for", "for"},
            {"while", "while"}
        };
};

