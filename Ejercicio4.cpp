#include<iostream>
using namespace std;
int main(){
	int Cn, i, j;
	string Nom[100];
	string aux;
	cout<<"Ingrese la cantidad de nombres que quiere ingresar"<<endl;
	cin>>Cn;
	for(i=0; i<Cn; i++){
		cout<<"Nombre #"<<i+1<<": "<<endl;
		cin>>Nom[i];
	}
	for(i=0; i<Cn-1; i++){
		for(j=0; j<Cn-i-1; j++){
			if(Nom[j]>Nom[j+1]){
				aux=Nom[j];
				Nom[j]=Nom[j+1];
				Nom[j+1]=aux;
			}
		}
	}
	cout<<"Los nombres ordenados alfabeticamente es de esta forma"<<endl;
	for(i=0; i<Cn; i++){
		cout<< Nom[i]<<endl;
	}
	return 0;
}