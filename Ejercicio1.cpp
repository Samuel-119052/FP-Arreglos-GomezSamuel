#include<iostream>
using namespace std;
char* Mayusculas(char cad[]){
	cad[0]= toupper(cad[0]);
	cad[8]= toupper(cad[8]);
	cad[19]= toupper(cad[19]);
	cad[22]= toupper(cad[22]);
	cad[25]= toupper(cad[25]);
	return cad;
}
int main(){
	char arr[]= "caceres patrimonio de la humanidad";
	cout<<"En minusculas: "<<endl;
	cout<<"caceres patrimonio de la humanidad"<<endl;
	cout<<"Con mayusculas: "<<endl;
	cout<<Mayusculas(arr)<<endl;
	return 0;
}