// needs exptensice thought and fixing

#include<iostream>
#include<conio.h>
#include<any>
#include<queue>
using namespace std;

class Interpret
{
    int acc, buff;
    string operation;
    bool is_float = false;
    public:

    void calc(queue<pair<string, string>> eval)
    {
        // if(eval.front().second == "INT")
        //     acc = stoi(eval.front().first);
        // else
        // {
        //     acc = (float)acc;
        //     acc = stof(eval.front().first);
        // }
        // eval.pop();
        // operation = eval.front().second;
        // eval.pop();
        // buff = eval.front().first;
        // eval.pop();

        // while(!eval.empty())
        // {
        //     operation = eval.front().second;
        //     eval.pop();
        //     buff = eval.front().first;
        //     eval.pop();
        // }
    }

    void operate()
    {
        // if(acc.type().name() == "float" || buff.type().name() == "float")
        // {
        //     any_cast<float>(acc);
        //     any_cast<float>(buff);
        //     is_float = true;
        // }
        // else
        // {
        //     any_cast<int>(acc);
        //     any_cast<int>(buff);
        // }
        // if(operation == "ADD")
        // {
        //     acc = acc + buff;
        // }
    }

};