#include <iostream>
#include <stack>
using namespace std;
int pr(char c){
    if(c=='^'){
        return 3;}
        else if(c=='*'||c=='/'||c=='%') {
            return 2;
            
            }
        else if (c=='+'||c=='-'){
            return 1;
            }
            else if(c=='('){
                return 0;
            }
            else{
                return -1;
            }
}
bool isOperator(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^'){
        return true;
    }
    else{
        return false;
    }
}


