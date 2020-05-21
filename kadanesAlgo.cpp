#include <iostream>

using namespace std;

// linear time compl.

int main(){

    //Kadane's algp

    int arr[]={1,2,-2,3,4,5};
    int n=6;
    int maxSum=arr[0];
    int currSum=arr[0];

    for(int i=1;i<n;i++){
        int continueWithSubarray= currSum+arr[i];
        int startNewSubarray= arr[i];

        currSum= max(startNewSubarray, continueWithSubarray);
        if(currSum>maxSum){
            maxSum= currSum;
        }

    }
    cout<<maxSum<<endl;


    return 0;
}