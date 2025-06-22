#include<iostream>
using namespace std;
int mistrcmp(char str1[], char str2[]){
	int result=0;
	int i=0;
	while(str1[i]!='\0'||str2[i]!='\0'){
		if(result==0){
			if(str1[i]!=str2[i]){
				if(str1[i]>str2[i]){
					result=1;
				}else{
					result=-1;
				}
			}
		}
		i++;
	}
	return result;
}
int main(){
	int Res;
	char str1[]= "mundos";
	char str2[]= "mundo";
	Res=mistrcmp(str1, str2);
	cout<<"Str1: "<<str1<<endl;
	cout<<"Str2: "<<str2<<endl;
	if(Res==0){
		cout<<"Las cadenas son iguales"<<endl;
	}else if(Res==1){
		cout<<"La primera cadena es mayor"<<endl;
	}else{
		cout<<"La segunda cadena es mayor"<<endl;
	}
	return 0;
}