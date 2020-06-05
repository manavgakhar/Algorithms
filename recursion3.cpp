
#include <iostream>
#include <string>
using namespace std;

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




int main(){

    cout<< countMazePath(0,0,3,3);

    



    return 0;


}