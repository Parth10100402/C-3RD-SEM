#include <bits/stdc++.h>
using namespace std;

class Queue {
    private:
    int *arr;
    int size;
    int front;
    int rear;
    public:

    Queue (int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isempty() {
            return (front == -1);
    }
    bool isfull() {
            return (rear == size - 1);
    }
    void enqueue(int value) {
        if (isfull()) {
            cout << "Queue is full";
            return;
        }
        if (isempty()) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout<<"value inserted is"<<value;
    }
    void dequeue() {
        if (isempty()) {
            cout << "Queue is empty";
            return;
        }
        cout<<"Deleted value is"<<arr[front];
        front++;
        if(front>rear) {
            front = rear = -1;
        }
    }
    void peek() {
        if (isempty()) {
            cout << "Queue is empty";
            return;
        }
        cout << "Front element is " << arr[front] << endl;
    }
            void display() {
            if (isempty()) {
                cout << "Queue is empty";
                return;
            }
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    };
        int main(){
            int n;
            cout<<"Enter the size of queue";
            cin>>n;
            Queue q(n);

            int choice;
            int val;
            do {
                cout << "1. Enqueue" << endl;
                cout << "2. Dequeue" << endl;
                cout << "3. Peek" << endl;
                cout << "4. Display" << endl;
                cout << "5. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "Enter value to be inserted: ";
                        cin >> val;
                        q.enqueue(val);
                        break;
                    case 2:
                        q.dequeue();
                        break;
                    case 3:
                        q.peek();
                        break;
                    case 4:
                        q.display();
                        break;
                    case 5:
                        cout << "Exiting the program" << endl;
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
            } while (choice != 5);
            return 0;   
            }
        