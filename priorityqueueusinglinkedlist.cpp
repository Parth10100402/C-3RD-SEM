#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        int priority;
        Node *next;
        Node(int val, int p){
            data=val;
            priority=p;
            next=NULL;
        }
};

class priority_queue{
    private:
        Node *front;
    public:
        priority_queue(){
            front=NULL;
        }
        bool isempty(){
            return front==NULL;
        }
        void enqueue(int val, int priority){
            Node *newnode=new Node(val, priority);
            if(isempty()){
                front=newnode;
            }
            else if(newnode->priority<front->priority){
                newnode->next=front;
                front=newnode;
            }
            else{
                Node *temp=front;
                while(temp->next!=NULL && temp->next->priority<newnode->priority){
                    temp=temp->next;
                }
                newnode->next=temp->next;
                temp->next=newnode;
            }
        }
        void deleteElement(){
            if(isempty()){
                cout<<"underflow"<<endl;
                return;
            }
            Node *temp=front;
            front=front->next;
            cout<<"deleted element is "<<temp->data<<endl;
            cout<<"deleted element priority is "<<temp->priority<<endl;
            delete temp;
        }
        void peek(){
            if(isempty()){
                cout<<"underflow"<<endl;
                return;
            }
            cout<<"front element is "<<front->data<<endl;
            cout<<"front element priority is "<<front->priority<<endl;
        }
        void display(){
            if(isempty()){
                cout<<"underflow"<<endl;
                return;
            }
            Node *temp=front;
            while(temp!=NULL){
                cout<<"element is "<<temp->data<<endl;
                cout<<"element priority is "<<temp->priority<<endl;
                temp=temp->next;
            }
        }
};
int main(){
    priority_queue pq;
    int choice,val,priority;
    while(){
        cout<<"1.enqueue"<<endl;
        cout<<"2.delete"<<endl;
        cout<<"3.peek"<<endl;
        cout<<"4.display"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter the value and priority: ";
                cin>>val>>priority;
                pq.enqueue(val,priority);
                break;
            case 2:
                pq.deleteElement();
                break;
            case 3:
                pq.peek();
                break;
            case 4:
                pq.display();
                break;
            case 5:
                exit(0);
            default:
                cout<<"invalid choice"<<endl;
        }
    }
    return 0;
}