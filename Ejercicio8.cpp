#include<iostream>
using namespace std;
int main(){
	long long num; //Aborda numeros mas grandes de 10 cifras
	int V=0, C;
	while(V==0){
		cout<<"Ingrese un numero de 10 cifras"<<endl;
		cin>>num;
		if(num>=999999999 && num<=10000000000){
			V=1;
		}else{
			cout<<"Error: Intentelo denuevo"<<endl;
		}
	}
	int Cfr[10];
	for(int i=9; i>=0; i--){
		Cfr[i]= num%10;
		num=num/10;
	}
	for(int i=0; i<5; i++){
		if(Cfr[i]!=Cfr[9-i]){
			C=0;
		}else{
			C=1;
		}
	}
	if(C==1){
		cout<<"El numero es capicua"<<endl;
	}else{
		cout<<"El numero no es capicua"<<endl;
	}
	return 0;
}