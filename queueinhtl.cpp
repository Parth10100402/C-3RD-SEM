#include<iostream>
#include<queue>
using namespace std;
class priority_queue{
    private:
       int *arr;
       int rear;
       int size;
       public:
         priority_queue(int s){
                size=s;
                arr=new int[size];
                rear=-1;
          }
          bool isempty(){
                return rear==-1;
          }
          bool isfull(){
            return rear==size-1;
          }  
          void enqueue(int x){
                if(isfull()){
                    cout<<"Overflow"<<endl;
                    return;
                }
                int i=rear;
                while(i>=0 && arr[i]<x){
                    arr[i+1]=arr[i];
                    i=i-1;
                }
                arr[i+1]=x;
                rear=rear+1;
                cout<<"The value is inserted"<<endl;
          }
          int dequeue(){
                if(isempty()){
                    cout<<"Underflow"<<endl;
                    return -1;
                }
                int item=arr[rear];
                rear=rear-1;
                return item;
          }
          int peek(){
                if(isempty()){
                    cout<<"Underflow"<<endl;
                    return -1;
                }
                return arr[rear];
          }
          void display(){
                if(isempty()){
                    cout<<"Underflow"<<endl;
                    return;
                }
                for(int i=rear;i>=0;i--){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
          }
          int main(){
            int n;
            cout<<"Enter the size of the priority queue: ";
                cin>>n;
                priority_queue pq(n);
                int choice;
                do{
                    cout<<"1. Enqueue"<<endl;
                    cout<<"2. Dequeue"<<endl;
                    cout<<"3. Peek"<<endl;
                    cout<<"4. Display"<<endl;
                    cout<<"5. Exit"<<endl;
                    cout<<"Enter your choice: ";
                    cin>>choice;
                    switch(choice){
                        case 1: cout<<"The value is inserted: "<<endl;
                            int x;
                            cout<<"Enter the value to be inserted: ";
                            cin>>x;
                            pq.enqueue(x);
                            break;
                        case 2:
                            cout<<"The value is deleted: "<<pq.dequeue()<<endl;
                            break;
                        case 3:
                            cout<<"The value at the front is: "<<pq.peek()<<endl;
                            break;
                        case 4:
                            pq.display();
                            break;
                        case 5:
                            cout<<"Exiting..."<<endl;
                            break;
                        default:
                            cout<<"Invalid choice"<<endl;
                    }
                }while(choice!=5);
                return 0;
            }
        }                     