#include<iostream>
#include<conio.h>
#include<string.h>
#include<stack>

using namespace std;

stack<char> stacks;

class Convert
{
    public:

    int prece(char ch)
    {
        switch(ch)
        {

            case '^': return 5;
            case '/': return 4;
            case '*': return 3;
            case '+': return 2;
            case '-': return 1;
        }
        return 0;
    }

    string postfix(string text)
    {
        string exp;
        for(auto &ch : text)
        {
            if(isalnum(ch))
                exp += ch;
            else
            {
                int curr_opt = prece(ch);
                if(stacks.empty())
                    stacks.push(ch);
                else
                {
                    while(!stacks.empty() && prece(stacks.top()) >= curr_opt)
                    {
                        exp += stacks.top();
                        stacks.pop();
                    }
                    stacks.push(ch);
                }
            }
        }
        while(!stacks.empty())
        {
            exp += stacks.top();
            stacks.pop();
        }
        return exp;
    }
};


int main()
{
    Convert c;
    cout<<c.postfix("4+6*2");    
    return 0;
}
