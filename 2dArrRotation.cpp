#include <iostream>
using namespace std;

void rotationclockwise(int a[][3],int temp[][3],int row, int col){
    //transpose stored in temp
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             temp[j][i]=a[i][j];
        }
    }

    //swapping in temp array to rotate it clockwise

    for(int r=0;r<row;r++){
        int i=0;
        int j=col-1;
        while (i<j)
        {
            swap(temp[r][i],temp[r][j]);
            i++;
            j--;
        }
        
    }
    
};

int main(){

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int temp[3][3];

    rotationclockwise(a,temp,3,3);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<temp[i][j]<<" ";

        }
        cout<<endl;
    }
    

    


    return 0;


}
