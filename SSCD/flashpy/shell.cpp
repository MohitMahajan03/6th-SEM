//BUILD a custom print method for all files
#include <iostream>
#include <conio.h>
#include "lex.cpp"
#include "infi.cpp"
#include "syntree.cpp"
#include "interpret.cpp"
#include <vector>
#include <queue>

using namespace std;

vector<pair<string, string>> vec;
queue<pair<string, string>> que;
float result;

void wipe(queue<pair<string, string>> que)
{
    while(!que.empty())
        que.pop();
}

int main()
{
    Lexer lex;
    Convert grammar;
    Syntax syn_tree;
    Interpret interpret;

    string text;
    while(1)
    {
        vec.clear();
        wipe(que);
        cout<<"flashpy > ";
        cin>>text;
        if(text == "exit")
            exit(0);
        vec = lex.tokenize(text);
        vec = grammar.postfix(vec);
        que = syn_tree.syntree(vec);
        interpret.calc(que);
        
    }
    return 0;
}