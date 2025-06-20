#include<iostream>
using namespace std;
int main(){
	char Fr[256];
	int i=0;
	cout<<"Escriba una frase"<<endl;
	cin.getline(Fr,256);
	//Se utiliza getline para leer una frase con espacios "cin.getline(arreglo, tamaño)" 
	cout<<"Separado seria: "<<endl;
	while(Fr[i]!='\0'){
		if(Fr[i]!=' '){
			cout<<Fr[i];
		}else{
			cout<<endl;
		}
		i++;
	}
	cout<<endl;
	return 0;
}