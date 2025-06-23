#include<iostream>
using namespace std;
int Pertenece(char Nom[], char Ape[]){
	int i=0;
	int P=0;
	while(Nom[i]!='\0'){
		int j=0;
		while(Nom[i+j]!='\0'&&Ape[j]!='\0'&&Nom[i+j]==Ape[j]){
			j++;
		}
		if(Ape[j]=='\0'){
			P=1;
		}
		i++;
	}
	return P;
}
int main(){
	int Pert;
	char Nom[100];
	cout<<"Ingrese el nombre completo y un apellido de una persona"<<endl;
	cin.getline(Nom, 100);
	char Ape[50];
	cout<<"Ingrese un apellido"<<endl;
	cin.getline(Ape, 50);
	Pert= Pertenece(Nom, Ape);
	if(Pert==1){
		cout<<"El apellido pertenece al nombre"<<endl;
	}else{
		cout<<"El apellido no pertenece al nombre"<<endl;
	}
	return 0;
}