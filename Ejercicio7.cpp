#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros del vector"<<endl;
	cin>>n;
	int Num[n];
	int aux;
	cout<<"Ingrese los numeros del vector"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": ";
		cin>>Num[i];
	}
	for(int i=0;i<n/2; i++){
		aux=Num[i];
		Num[i]=Num[n-i-1];
		Num[n-i-1]=aux;
	}
	cout<<"Los numeros invertidos quedaria de esta forma: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<Num[i]<<endl;
	}
	return 0;
}