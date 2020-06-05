
#include <iostream>
#include <string>
using namespace std;


// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int pow = n* power(n,p-1);
//     return pow;
    
    
// }

int sumTillN(int n){

    if(n==0){
        return 0;
    }



    return n+sumTillN(n-1);

}

int linearSearch(int si,int arr[],int n,int key){
    if(si==n){
        return -1;
    }

    if(arr[si]==key){
        return si;
    }
    else{
        return linearSearch(si+1,arr,n,key);
    }
}


int main(){

    int arr[]= {3,2,4,1,5,61,7};
    int n=7;
    int key=61;
    cout<<linearSearch(0,arr,n,key)<<endl;

    cout<< sumTillN(5)<<endl;

   

    
    



    return 0;


}
