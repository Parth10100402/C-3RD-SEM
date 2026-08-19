#include <iostream>
#include <stack>
using namespace std;

int evaluate (vector<string>stream) {
    stack<int>s;
    for(string itr:tokens){
        if (itr=="+"|| itr=="-"|| itr=="*"|| itr=="/"|| itr=="%"|| itr=="^"){
            int op1,op2;
            op2=s.top();
            s.pop();
            if (itr=="+"){
                s.push(op1+op2)
            }
            else if (itr=="-"){
                s.push(op1-op2);
            }
            else if (itr=="*"){
                s.push(op1*op2);
        }
        else if (itr=="/"){
                s.push(op1/op2);
    } 
    else if (itr=="%"){
                s.push(op1%op2);
    }
    else if (itr=="^"){
                s.push(pow(op1,op2));
    }
}
    else 
    {s.push(stoi(itr));
    }
    }
    return s.top();
}

int main()
{
    string postfix;
    cout<<"Enter the postfix expression";
    getline(cin,postfix);
    stringstream ss(postfix);
    string token;
    vector<string>token;
    while (ss>>token){
        token push_back(token);
    }
    cout<<evaluate(token);
    return 0
}