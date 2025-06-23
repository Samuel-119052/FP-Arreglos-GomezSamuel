#include<iostream>
using namespace std;
int main(){
	int Mes=12;
	string Nmes[Mes]= {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
	double Vnt[12];
	double sum=0;
	double Prom;
	cout<<"Ingrese el monto de las ventas mensuales de todo el año 2020"<<endl;
	for(int i=0; i<Mes; i++){
		cout<<Nmes[i]<<": "<<endl;
		cin>>Vnt[i];
		sum+= Vnt[i];
	}
	Prom= sum/Mes;
	cout<<"El valor de la venta mensual promedio es: "<<Prom<<endl;
	int min=0, reg=0, exc=0;
	double Ptj;
	cout<<"Meses con ventas excelentes"<<endl;
	for(int i=0; i<Mes; i++){
		Ptj=(Vnt[i]/Prom)*100;
		if(Ptj<40.0){
			min++;
		}else if(Ptj<=75.0){
			reg++;
		}else{
			exc++;
			cout<<"-"<<Nmes[i]<<endl;
		}
	}
	cout<<"El porcentaje de meses segun el nivel de ventas"<<endl;
	cout<<"Minimo: "<<min*100.0/Mes<<"%"<<endl;
	cout<<"Regular: "<<reg*100.0/Mes<<"%"<<endl;
	cout<<"Excelente: "<<exc*100.0/Mes<<"%"<<endl;
	return 0;
}