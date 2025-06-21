#include<iostream>
using namespace std;
int main(){
	int n, max, min, Repmax=0, Repmin=0;
	cout<<"Ingrese la cantidad de numeros"<<endl;
	cin>>n;
	int Num[n];
	cout<<"Ingrese los numeros"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cin>>Num[i];
	}
	max=Num[0];
	min=Num[0];
	for(int i=1; i<n; i++){
		if(Num[i]>max){
			max=Num[i];
		}
		if(Num[i]<min){
			min=Num[i];
		}
	}
	for(int i=0; i<n; i++){
		if(Num[i]==max){
			Repmax++;
		}
		if(Num[i]==min){
			Repmin++;
		}
	}
	cout<<"El numero mayor es: "<<max<<" y se repite "<<Repmax<<" veces"<<endl;
	cout<<"El numero menor es: "<<min<<" y se repite "<<Repmin<<" veces"<<endl;
	return(0);
}