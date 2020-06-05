#include <iostream>
#include <string>
using namespace std;


template <typename T>

class Stack{
    int top;
    int maxSize;
    T *arr;  // Dynamically allocated mem for array
public:
    Stack(int maxSize){
        this-> maxSize= maxSize;
        this-> arr= new T[this-> maxSize];
        this->top=-1;
    }

    void push(T data){
        if(this->top== this->maxSize-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    
    void pop(){
        if(this->top== -1){
            cout<< "Stack Underflow" <<endl;
            return;
        }
        this->top--;
    }

    T getTop(){
        return this->arr[this->top];
        }
    int size(){
        return this->top+1;
    }
    bool empty(){
        return this->top == -1;
    }


};

int main(){

    Stack<int> s(5);

    s.push(5);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(78);



    while(!s.empty()){
        cout<<s.getTop()<<endl;
        s.pop();
    }
    if(s.empty()){
        cout<< "Stack is empty"<<endl;
    }

    return 0;


}