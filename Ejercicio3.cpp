#include<iostream>
using namespace std;
int main(){
	char Fr[256];
	char O;
	int cont=0;
	int V=1;
	cout<<"Ingrese una frase"<<endl;
	cin.getline(Fr,256);
	while(V==1){
		cout<<"Ingrese una letra para contar la ocurrencia"<<endl;
		cin>>O;
		if(O>='A'&&O<='Z'){
			V=0;
		}else if(O>='a'&&O<='z'){
			V=0;
		}else{
			cout<<"Error: Intente denuevo"<<endl;
		}
	}
	int i=0;
	while(Fr[i]!='\0'){
		if(Fr[i]==O){
			cont++;
		}
		i++;
	}
	cout<<"La ocurrencia de su letra escogida es: "<<cont<<endl;
	return 0;
}