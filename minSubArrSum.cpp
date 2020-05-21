#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,-2,3,4,5};
    int n=6;

    int minSum=INT_MAX;
    int currSum=arr[0];

    for(int i=1;i<n;i++){
        int addCurr= currSum+arr[i];
        int curr= arr[i];

        currSum= min(addCurr,curr);

        minSum= min(minSum,currSum);
    }

    cout<< minSum;



    return 0;
}