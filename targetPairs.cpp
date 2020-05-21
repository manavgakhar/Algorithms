#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];

	for(int k=0;k<n;k++){
		int el;
		cin>>el;
		arr[k]=el;
	}

    int targ;
    cin>>targ;
    for(int i=0;i<n;i++){
        int one=arr[i];
        for(int j=0;j<i;j++){
            int two= arr[j];
            if((one+two)==targ){
                cout<<one<<" and "<<two<<endl;
            }
        }
    }


	
	return 0;
}