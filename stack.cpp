#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr ;
    }
};
class Stack {
    Node* top;
public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        return top->data;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};


int main(){
    int choice, val;
    Stack s;
    do{
        cout << "1:- Push \n";
        cout << "2:- Pop \n";
        cout << "3:- Peek \n";
        cout << "4:- Display \n";
        cout << "5:- End \n";

        cout << "Enter your choice:";
        cin >> choice;

        switch(choice){
            case 1: cout << "Enter the value to be pushed:";
            cin >> val;
            s.push(val);
            break;
            case 2: s.pop();
            break;
            case 3: s.peek();
            break;
            case 4: s.display();
            break;
            case 5: cout << "Exiting the program";
            break;

            default: cout << "invalid choice\n";
        }
    }while(choice != 5);
    cout << endl;
    return 0;
}