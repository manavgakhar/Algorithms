#include <iostream>
using namespace std;

int main(){

    // int x=10;

    // int* xptr= &x;

    // cout<< xptr<<endl;
    // cout<< *xptr<<endl;

    // reference

    // int x=10;
    // int &z = x;
    // cout<<z;
    
    int arr[4]= {1,2,2,1};
    
    int left=0;
    int right=3;
    bool flag=true;
    while(left<right){
        if(arr[left]!=arr[right]){
            cout<<"Not a Palindrome";
            flag=false;
            break;
        }
        ++left;
        --right;
    }
    if(flag){
        cout<<"Palindrome";
    }
    
    


}   