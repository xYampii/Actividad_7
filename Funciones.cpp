#include <iostream>

using namespace std;

int suma(int num1,int num2, int num3);
void suma(int &num1, int &num2);

main(){

int a=10, b=20; suma(a,b);
cout<<"a:"<<a<<endl;
cout<<"b:"<<a<<endl;

system("pause");
}

int suma(int num1, int num2, int num3){
int resultado = 0;
resultado = num1+num2+num3;
return resultado;

}

void suma(int &num1, int &num2){
int resultado = 0;
num1+=1; 
num2+=1; 
resultado = num1+num2; 
cout<<resultado<<endl;
}
