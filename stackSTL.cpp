#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(5);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(78);

    cout<< s.top()<<endl;

    cout<< "Size of stack is "<<s.size()<<endl;



    while(!s.empty()){
        cout<<"Current top is "<<s.top()<<endl;
        s.pop();
    }
    if(s.empty()){
        cout<< "Stack is empty"<<endl;
    }

    return 0;


}