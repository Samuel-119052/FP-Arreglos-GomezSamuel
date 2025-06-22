#include<iostream>
#include<cstdlib>
double Media(int arr[]){
	double med;
	int sum=0;
	for(int i=0; i<30; i++){
		sum+=arr[i];
	}
	med=(double)sum/30;
	return med;
}
int Moda(int arr[]){
	int mda=arr[0];
	int Fr=1, Mfr=1;
	for(int i=0; i<30; i++){
		for(int j=i+1; j<30; j++){
			if(arr[i]==arr[j]){
				Fr++;
			}
		}
		if(Fr>Mfr){
			Mfr=Fr;
			mda=arr[i];
		}
	}
	return mda;
}
double Mediana(int arr[]){
	double mdn;
	int aux;
	for(int i=0; i<29; i++){
		for(int j=i+1; j<30; j++){
			if(arr[i]>arr[j]){
				aux=arr[i];
				arr[i]=arr[j];
				arr[j]=aux;
			}
		}
	}
	mdn=(arr[14]+arr[15])/2.0;
	return mdn;
}
using namespace std;
int main(){
	int arr[30];
	int i, sum;
	i=0;
	sum=0;
	while(i<30){
		arr[i]= rand()%1000+1;
		if(arr[i]>=100){
			if(arr[i]<=1000){
				i++;
			}
		}
	}
	for(i=0; i<30; i++){
		cout<<"Numero #"<<i+1<<": "<<endl;
		cout<<arr[i]<<endl;
	}
	double Med;
	Med= Media(arr);
	cout<<"La media es: "<<Med<<endl;
	int Mda;
	Mda= Moda(arr);
	cout<<"La moda es: "<<Mda<<endl;
	double Mdn;
	Mdn= Mediana(arr);
	cout<<"La mediana es: "<<Mdn<<endl;
	return 0;
}