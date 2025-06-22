#include<iostream>
using namespace std;
void mistrcat(char *str1, char *str2){
	while(*str1 != '\0'){
		str1++;
	}
	while(*str2 != '\0'){
		*str1= *str2;
		str1++;
		str2++;
	}
	*str1='\0'; 
}
int main(){
	char str1[100]="Hola ";
	char str2[]="Mundo";
	mistrcat(str1, str2);
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;
	return 0;
}