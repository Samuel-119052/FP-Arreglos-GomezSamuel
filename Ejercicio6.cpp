#include<iostream>
using namespace std;
int main(){
	int n, Sp=0, Si=0;
	cout<<"Ingrese la cantidad de numeros que tendra el vector"<<endl;
	cin>>n;
	int Num[n];
	cout<<"Ingrese los numeros"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cin>>Num[i];
	}
	for(int i=0; i<n; i++){
		if(Num[i]%2==0){
			Sp+=Num[i];
		}else{
			Si+=Num[i];
		}
	}
	cout<<"La suma de los numero pares del vector es: "<<Sp<<endl;
	cout<<"La suma de los numero impares del vector es: "<<Si<<endl;
	return 0;
}