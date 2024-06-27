//'''TOKENS'''

/*
Ignore blanck spaces
add words for analysis
componentalize tokenizing for words and digits
*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<unordered_map>
#include<vector>

using namespace std;
 
unordered_map<string, string> tokens;
unordered_map<char, string> operators = {
    {'+' , "ADD"},
    {'-' , "SUB"},
    {'*' , "MUL"},
    {'/' , "DIV"},
    {'^' , "POW"},
};


class Error
{
    public:

    string err(char symbol)
    {
        string error = "Unidentifiable symbol " + symbol;
        return error;
    }
};

class Lexer : public Error
{
    public:

    unordered_map<string, string> tokenize(string text)
    {
        string digits, words;
        bool isFloat = false;

        for(auto &sym : text)
        {
            if(isdigit(sym))
                digits += sym;
                // cout<<"digits = "<<digits<<" sym = "<<sym<<endl;

            else if(!isalnum(sym))
            {
                if(!digits.empty())
                {
                    if(isFloat == true)
                        tokens[digits] = "FLOAT";
                    else
                        tokens[digits] = "INT";
                    
                    digits.clear();
                }
                switch(sym)
                {
                    case '+': tokens["+"] = operators[sym];
                        break;
                    case '-': tokens["-"] = operators[sym];
                        break;
                    case '*': tokens["*"] = operators[sym];
                        break;
                    case '/': tokens["/"] = operators[sym];
                        break;
                    case '^': tokens["^"] = operators[sym];
                        break;
                    default: err(sym);
                }
            }
            else
                err(sym);
            }
            if(!digits.empty())
            {
                if(isFloat == true)
                    tokens[digits] = "FLOAT";
                else
                    tokens[digits] = "INT";
                
                digits.clear();
            }
        return tokens;
    }
};

int main()
{
    Lexer l;
    string text = "24+25";
    unordered_map<string, string> res;
    res = l.tokenize(text);
    for(auto &it : res)
        cout<<it.first<<" : "<<it.second<<endl;
    return 0;
}