#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;
int main(){
	char Li[200];
	cout<<"Ingrese una linea"<<endl;
	cin.getline(Li, 200);
	int i=0;
	int j=0;
	char Dig[200];
	while(Li[i]!='\0'){
		if( isdigit(Li[i]) ){
			Dig[j]=Li[i];
			j++;
		}
		i++;
	}
	Dig[j]='\0';
	int n;
	n= atoi(Dig);
	n+=2;
	cout<<"La linea con solo digitos sumado 2 seria: "<<n<<endl;
	return 0;
}