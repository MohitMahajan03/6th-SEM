#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<stack>

using namespace std;

class Node
{
    public:
    string id;
    string val;
    Node* left = NULL;
    Node* right = NULL;
};
Node* root = NULL;

class Syntax
{

    public:

    Node* new_node()
    {
        
    }

    void syntree(vector<pair<string, string>>& exp)
    {
        for (auto& it : exp)
        {

        }
        
    }

};