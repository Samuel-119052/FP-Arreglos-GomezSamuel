#include<iostream>
using namespace std;
void mistrcat(char str1[], char str2[]){
	int i=0;
	while(str1[i] != '\0'){
		i++;
	}
	int j=0;
	while(str2[j] != '\0'){
		str1[i]= str2[j];
		i++;
		j++;
	}
	str1[i]='\0'; 
}
int main(){
	char str1[100]="Hola ";
	char str2[]="Mundo";
	mistrcat(str1, str2);
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;
	return 0;
}