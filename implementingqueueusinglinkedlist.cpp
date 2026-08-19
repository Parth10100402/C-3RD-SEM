#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class Queue{
    private:
        Node *front;
        Node *rear; 
        public:
        Queue(){
            front=nullptr;
            rear=nullptr;
        }
        bool isEmpty(){
            return front==nullptr;
        }
            
        void enqueue(int val){
            Node *newNode= new Node(val);
            if(isEmpty()){
                front=newNode;
                rear=newNode;
            }
            else{
                rear->next=newNode;
                rear=newNode;
            }
        }
};