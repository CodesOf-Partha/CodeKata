/* Parenthesis Checking */
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
    
    stack<char> parenthesis;
    string expression;
    
    cout<<"Enter the expression :"<<endl;
    getline(cin, expression); //Getting a line upto new line including space
    
    for(int i = 0; expression[i] != 0; i++)
    {
        //Only checking for parenthesis and not square bracket or any other characters
        if(expression[i] == '(' || expression[i] == ')')
        {
            if(parenthesis.size() == 0) //if stack empty push
            {
                parenthesis.push(expression[i]);
            }
            else{
                //top() used to get the value in the stack
                if(parenthesis.top() == '(' && expression[i] == ')')
                {
                    parenthesis.pop(); //removes the top value from stack
                }
                else{
                    parenthesis.push(expression[i]);  //or push it
                }
            }
        }
    }
    
    if(parenthesis.size() == 0)
        cout<<"Syntax is correct";
    else
        cout<<"Invalid Syntax";
    
    
    return 0;
}