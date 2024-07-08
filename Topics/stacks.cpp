#include <iostream>
//?A stack is a container that stores elements in a last-in first-out (LIFO) order.Following is the implementation of stack without stl in cpp.
class Stack{
   //properties

    public:
    int*arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    }

    //! push function 
    void push(int num){
    if(top >= size){
        std:: cout << "STACK OVERFLOW" <<std::endl;
    }
    else{
        top++;
        arr[top] = num;
    }
    }

    //! pop function
    void pop(){
        if(top > -1){
            top--;
        }
        else{
            std:: cout << "STACK UNDERFLOW" <<std::endl;
        }
    }

    void peek(){
        if(top >=0){
        std::cout << "THE PEAK IS : " << arr[top] << std::endl;}
    }
    void isEmpty(){
        if (top >=0){ 
        std:: cout << " The stack is not empty" << std::endl; 
        }
        else {
        std:: cout << " The stack is empty" << std::endl; 
        }
    }
};
int main(){
  Stack s1(5);
  s1.isEmpty();
  s1.push(22);
  s1.peek();
  s1.push(1000);
  s1.push(1003);
  s1.push(1002);
  s1.push(1004);
  s1.push(2000);
  s1.peek();
  s1.push(21);
  s1.peek();
  s1.pop();
  s1.peek();
  s1.isEmpty();
}
