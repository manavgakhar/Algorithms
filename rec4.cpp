
#include <iostream>
#include <string>
using namespace std;


// string addStar(string str){
//     if(str.length() ==0){
//         return str;
//     }



//     char ch= str[0];
//     string ros= str.substr(1);

//     //recursive call

//     string recursionResult= addStar(ros);

//     string star="*";

//     if(ch== recursionResult[0]){
//         return ch+star+recursionResult;
//     }
//     else{
//         return ch+ recursionResult;
//     }



// }



// string removeRep(string str){
//      if(str.length() == 0){
//         return str;
//     }


//     char ch=str[0];
//     string ros= str.substr(1);

//     string recursionCall= removeRep(ros);
    
//     if(ch==recursionCall[0]){
//         return recursionCall;
//     }
//     else{
//         return ch+recursionCall;
//     }



// }

// string moveToEnd(string str){
//      if(str.length() == 0){
//         return str;
//     }

//     char ch=str[0];
//     string ros= str.substr(1);

//     string recursionCall= moveToEnd(ros);

//     if(ch=='x'){
//         return recursionCall+ch;
//     }
//     else{
//         return ch+recursionCall;
//     }




// }


// void printPermutations(string str,string ans){
//     if(str.length()==0){
//         cout<<ans<<endl;
//         return;
//     }


//     for(int i=0; i<str.length();i++){

//         char ch= str[i];

//         string ros = str.substr(0,i)+ str.substr(i+1);
//         printPermutations(ros,ans+ch); 
//     }
     


// }






int main(){

    cout<<moveToEnd("axbbxbxbe");

    



    return 0;


}