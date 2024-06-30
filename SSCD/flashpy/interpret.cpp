// needs exptensice thought and fixing

#include<iostream>
#include<conio.h>
#include<any>
#include<queue>
#include<math.h>
using namespace std;

class Interpret
{
    float acc, buff;
    string operation;
    bool is_float = false;
    public:

    template <typename X> void operate(X& acc, X buff, string operation)
    {
        if(is_float)
            any_cast<float>(acc);
        if(operation == "ADD")
            acc = acc + buff;
        if(operation == "SUB")
            acc = acc - buff;
        if(operation == "MUL")
            acc = acc * buff;
        if(operation == "DIV")
            acc = acc / buff;
        if(operation == "POW")
            acc = pow(any_cast<double>(acc), any_cast<double>(buff));
    }

    void calc(queue<pair<string, string>> eval)
    {
        if(eval.front().second == "INT" && !is_float)
            acc = stoi(eval.front().first);
        else
        {
            acc = stof(eval.front().first);
            is_float = true;
        }
        eval.pop();
        operation = eval.front().second;
        eval.pop();
        if(eval.front().second == "INT" && !is_float)
            buff = stoi(eval.front().first);
        else
        {
            buff = stof(eval.front().first);
            is_float = true;
        }
        eval.pop();
        while(!eval.empty())
        {
            operate(acc, buff, operation);
            operation = eval.front().second;
            eval.pop();
            if(eval.front().second == "INT" && !is_float)
                buff = stoi(eval.front().first);
            else
            {
                buff = stof(eval.front().first);
                is_float = true;
            }
            eval.pop();
        }
        operate(acc, buff, operation);
        if(is_float)
            cout<<acc<<endl;
        else
            cout<<int(acc)<<endl;

    }
};


// int main()
// {
//     Interpret i;
//     queue<pair<string , string>> eval;
//     eval.push(pair("25", "INT"));
//     eval.push(pair("*", "MUL"));
//     eval.push(pair("50", "INT"));
//     eval.push(pair("+", "ADD"));
//     eval.push(pair("60", "INT"));
//     eval.push(pair("+", "ADD"));
//     eval.push(pair("70", "INT"));

//     i.calc(eval);
// }