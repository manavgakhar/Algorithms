#include <iostream>
using namespace std;

int main(){

    int arr[]={2,3,5};
    int b=15;
    int n=3;

    //brute force
    // int count=0;
    // for(int i=0;i<n;i++){
    //     int one=arr[i];
    //     if((one*one)<b){
    //         count+=1;
    //     }
    //     for(int j=i;j<n;j++){
    //     int two= arr[j];
    //     if((two*one)<b){
    //         count+=1;
    //     }
    //     }
    // }
    // cout<<count;

    int count=0;
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int j=n-1;
        while(j>=i){
            int prod=arr[j];
            if((curr*prod)<b){
                count+= ((j-i)*2 +1);
                break;
            }
            j--;
        }
    
    }
    cout<<count;


}