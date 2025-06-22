#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese la cantidad de numeros que tendra el vector"<<endl;
	cin>>n;
	int Num[n];
	cout<<"Ingrese los numeros"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cin>>Num[i];
	}
	int ult=Num[n-1];
	for(int i=n-1; i>0; i--){
		Num[i]=Num[i-1];
	}
	Num[0]=ult;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<Num[i]<<endl;
	}
	return 0;
}