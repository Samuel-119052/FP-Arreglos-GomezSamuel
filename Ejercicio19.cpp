#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	char Fr[200];
	char Limp[200];
	int j=0;
	int iz, de;
	int Pal=1;
	cout<<"Ingrese una frase"<<endl;
	cin.getline(Fr, 200);
	char cra;
	for(int i=0; Fr[i]!='\0'; i++){
		cra=Fr[i];
		if(cra>='A'&&cra<='Z'){
			cra=cra+32;
		}
		if(cra=='á'){
			cra='a';
		}else if(cra=='é'){
			cra='e';
		}else if(cra=='í'){
			cra='i';
		}else if(cra=='ó'){
			cra='o';
		}else if(cra=='ú'){
			cra='u';
		}
		if(cra>='a' && cra<='z'){
			Limp[j]=cra;
			j++;
		}
	}
	Limp[j]='\0';
	iz=0;
	de=j-1;
	while(iz<de&&Pal==1){
		if(Limp[iz]!=Limp[de]){
			Pal=0;
		}
		iz++;
		de--;
	}
	if(Pal==1){
		cout<<"Es un palindromo"<<endl;
	}else{
		cout<<"No es un palindromo"<<endl;
	}
	return 0;
}