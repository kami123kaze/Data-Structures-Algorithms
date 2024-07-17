//! Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement.

#include <iostream>


class Queue{
    public:

    int* arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this -> size = size;
        arr = new int[size];
        front, rear = 0;
    }

    void push(int num){
    if(rear < size ){
        arr[rear] = num;
        rear ++;
    }
    else {
        std:: cout << "FULL" << std::endl;
    }
    }


    void pop(){
    if(front == rear){
        std:: cout << "empty "<<std::endl;;
    }
    else {
        arr[front] = -1;
        front++;
    }
    }

    void Front(){
        if(rear == front){
           std:: cout << "EMPTY " << std::endl;
        }
        else{
        std:: cout << "front is : " << arr[front] << std::endl;
    }}
};


int main(){
     Queue q1(5);
     q1.Front();
     q1.push(10);
     q1.Front();
     q1.pop();
     q1.Front();
     q1.push(1);
     q1.push(2);
     q1.push(3);
     q1.push(4);
     q1.Front();
}