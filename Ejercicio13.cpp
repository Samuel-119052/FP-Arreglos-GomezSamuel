#include<iostream>
using namespace std;
void mistrcpy(char* str1, char*str2){
	int i=0;
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
}
int main() {
	char str1[20];
	char str2[]="Hola a todos";
	mistrcpy(str1, str2);
	cout<<"str1 : "<<str1;
	cout<<endl;
	cout<<"str2 : "<<str2;
	return 0;
}