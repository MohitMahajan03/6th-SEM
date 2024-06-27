//'''TOKENS'''
#include<iostream>
#include<conio.h>
#include<string.h>
#include<unordered_map>

using namespace std;
 
unordered_map<string, string> tokens;

class Token
{

};

class Lexer
{

};

class Error
{
    public:

    string err(string text)
    {
        string error = "Unidentifiable symbol ";
        error.append(text);
        return error;
    }
};