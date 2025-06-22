#include<iostream>
using namespace std;
bool Ordenado(int vec[], int n){
	bool ord=true;
	for(int i=0; i<n-1; i++){
		if(vec[i]>vec[i+1]){
			ord=false;
		}
	}
	return ord;
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos del vector"<<endl;
	cin>>n;
	int vec[n];
	cout<<"Ingrese los elementos del vector"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cin>>vec[i];
	}
	bool Ord;
	Ord= Ordenado(vec, n);
	if(Ord==true){
		cout<<"El vector esta ordenado"<<endl;
	}else{
		cout<<"El vector no esta ordenado"<<endl;
	}
	return 0;
}