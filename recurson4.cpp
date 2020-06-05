#include <iostream>
#include <string>
using namespace std;

void permute(char* in,int i){
    //Base case
    if(in[i] == '\0'){
        cout<<in<<" ,";
        return;
    }

    //Recursive case
    for(int j=i;in[j] != '\0';j++){
        swap(in[i],in[j]);
        permute(in,i+1);
        //Backtracking-- to resote original array
        swap(in[j],in[i]);

    }

}




int main(){

    char in[100];
    cin>>in;

    permute(in,0);


    



    return 0;


}