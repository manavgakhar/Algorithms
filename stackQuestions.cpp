#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=  str[i];

        if(ch == '('){
            s.push(ch);
        }
        else{
            if(s.empty()){
                return false;
            }
            s.pop();
            
        }


        }
    if(s.empty()){
        return true;
    }
    return false;
}

bool isDuplicate(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch= str[i];
        if(ch!= ')'){
            s.push(ch);
        }
        else{
            if(s.top()=='('){
                return true;
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

void printNextGreater(int arr[],int n){
    stack<int> s;

    for(int i=0;i<n;i++){
        while(!s.empty() and s.top() < arr[i]){
            int val= s.top();
            s.pop();

            cout<< val << " -> " <<arr[i] <<endl;

        }
        s.push(arr[i]);
    }
    while(!s.empty()){
        int val= s.top();
        s.pop();
        cout<< val << " -> " << -1 <<endl;


    }
}

void printNextSmaller(int arr[], int n){
    int ans[n];

    stack<int> s;
    
    for(int i=0; i<n; i++){
        while(! s.empty() and arr[s.top()]> arr[i]){
            int idx= s.top()
            s.pop();
            ans[idx]= arr[i];
        }
        s.push(i)

    }
    while(! s.empty()){
        int idx= s.top()
        s.pop();
        ans[idx]= -1;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    

}
     



int main(){
    stack<int> s;

    // cout<< isBalanced("((()))(")<<endl; //false --- returns 0
    // cout<< isBalanced("(())()")<<endl; //true --- returns 1

    cout<< isDuplicate("((a+b))")<<endl;//true
    cout<< isDuplicate("((a+b)+(c))")<<endl; //false

    int arr[]= {54,5,3,6,2,10,14};
    int n=8;

    printNextGreater(arr,n);
    
    return 0;


}