#include <iostream>
#include <string>
using namespace std;

void TwodStairSearch(int arr[][4],int row,int col,int key){
    int r=0;
    int c=col;
    while(r<=row){
        if(key<=arr[r][c]){
            while(c>=0){
                if(arr[r][c]==key){
                    cout<<"Yaas kween";
                    break;
                }
                c--;

            }
            c=col;
        }
        r++;
    }
    
    

}



int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    TwodStairSearch(arr,3,3,11);

    



    return 0;


}