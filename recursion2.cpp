
#include <iostream>
#include <string>
using namespace std;

// bool isSorted(int si,int arr[], int n){
//     if(si==n-1){
//         return true;
//     }

//     if(arr[si]>arr[si+1]){
//         return false;
//     }
//     return isSorted(si+1,arr,n);

// }
// int powerBetter(int n,int p){
//     if(p==0){2
//         return 1;
//     }

//     int subProblem= powerBetter(n,p/2);
//     if(p & 1){
//         int ans = subProblem * subProblem * n;
//     }
//     else{
//         int ans = subProblem * subProblem;
//         return ans;
//     }
// }
// int lastIndex(int si,int arr[],int n,int key){
//     if(si==n){
//         return -1;
//     }
     
//     int index= lastIndex(si+1,arr,n,key);
//     if(index != -1){
//         return index;
//     }
//     else{
//         if(arr[si]==key){
//             return si;
//         }
//         else{
//             return -1;
//         }
//     }



// }

int countMazePath(int sr,int sc,int er, int ec){
    //Base case
    if(sr==er and sc==ec){
        return 1;
    }
    if(sr>er or sc>ec){
        return 0;
    }

    
    //Recursive case

    int rightMove = countMazePath(sr,sc+1,er,ec);
    int downMove= countMazePath(sr+1,sc,er,ec);

    int total= rightMove + downMove;
    return total;

}

// int fib(int n){
//     //Base case
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     // Recursive case

//     int n1= fib(n-1);
//     int n2= fib(n-2);

//     int n= n1+n2;
//     return n;
    

// }




int main(){

    // int arr[]={1,2,3,14,5,6,7};
    // int n=7;

    // cout<< isSorted(0,arr,7)<<endl;

    cout<< countMazePath(0,0,2,2);

    



    return 0;


}