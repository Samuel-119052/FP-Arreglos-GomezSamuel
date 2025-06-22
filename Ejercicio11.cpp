#include<iostream>
using namespace std;
int main(){
	int n, Sp=0, Sn=0;
	cout<<"Ingrese la cantidad de numeros que tendra el arreglo"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Ingrese los numeros"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cin>>arr[i];
		if(arr[i]>=0){
			Sp+=arr[i];
		}else{
			Sn+=arr[i];
		}
	}
	cout<<"La suma de positivos es: "<<Sp<<endl;
	cout<<"La suma de negativos es: "<<Sn<<endl;
	return 0;
}