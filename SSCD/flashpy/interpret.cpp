#include<iostream>
#include<conio.h>
#include<any>
#include "syntree.cpp"
using namespace std;

class Interpret : public Node
{
    any acc, buff;
    string operation;
    bool is_start = false;
    public:

    void calc(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        calc(root->left);
        if(root->id != "INT" && root->id != "FLOAT")
            operation = root->id;
        else if(!is_start && (root->id == "INT" || root->id == "FLOAT"))
        {
            if(root->id == "INT")
                acc = stoi(root->val);
            else if(root->id == "FLOAT")
                acc = stof(root->val);

            is_start = true;
        }
        else
        {
            if(root->id == "INT")
                buff = stoi(root->val);
            else if(root->id == "FLOAT")
                buff = stof(root->val);
        }
        calc(root->right);
    }

    void eval(any acc, string operation, any buff)
    {
        // if(operation == "ADD")
        //     acc = acc + buff;
    }

};