#include<iostream>
using namespace std;
int Balanceo(char Fr[]){
	int i=0;
	int bal=0;
	int correct=1;
	while(Fr[i]!='\0'){	    
		if(Fr[i]=='('){
			bal++;
		}else if(Fr[i]==')'){
			bal--;
			if(bal<0){
				correct=0;
			}
		}
		i++;
	}
	if(bal!=0){
		correct=0;
	}
	return correct;
}
int main(){
	char Fr[200];
	cout<<"Ingrese una frase que tenga parentesis"<<endl;
	cin.getline(Fr, 200);
	int Bal;
	Bal= Balanceo(Fr);
	if(Bal==1){
		cout<<"Los parentesis estan balanceados"<<endl;
	}else{
		cout<<"Los parentesis no estan balanceados"<<endl;
	}
	return 0;  
}