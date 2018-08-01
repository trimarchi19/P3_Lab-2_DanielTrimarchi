#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <iomanip>
using std::setw;

#include <stdio.h>      /* printf */
#include <math.h>       /* asin */

#define PI 3.14159265

void numerosImpares(){
	int num=1,num_saltos=0,cont=1,impar=1;
	do{
	cout <<"Ingrese un Numero [1-N]: "<<endl;
	cin >> num;
	}while(num<1);
	bool encontrados=false;
	int array[num];
	for(int i=1;i<num;i++){
		num_saltos+=i;
	}
	int encontrado=0;
	while(encontrados==false){
		if(cont % 2 !=0){		
			if(impar>num_saltos){
				array[encontrado]=cont;
				encontrado++;
			}
			if(encontrado==num){
				encontrados=true;	
			}
			impar++;
		}
		cont++;	
	}
	cout <<num<<"^3 =";
	int suma=0;
	for(int i =0;i<num;i++){
		if(i<num-1){
       		cout<< array[i]<<" + ";
		}else if(i<num){
		cout<< array[i]<<" =";
		}
		suma+=array[i];
	}
	cout <<suma<<endl;
	
    
}
void triangulos(){
	double alfa,beta,gamma,lado1,lado2,lado3,op_g,op_a,op_b,area,s,resultado;
	do{
		cout <<"Ingrese el Primer Lado: ";
		cin >> lado1;
		cout <<endl;
	}while(lado1<1);
	do{
		cout <<"Ingrese el Segundo Lado: ";
		cin >> lado2;
		cout <<endl;
	}while(lado2<1);
	do{
		cout <<"Ingrese el Tercer Lado: ";
		cin >> lado3;
		cout <<endl;
	}while(lado3<1);

		//op =operacion ,a=alfa ,g=gamma, b=beta	
			// ejemplo (a^2 + b^2 - c^2)/ 2*a*b
		op_a=((lado2*lado2)+(lado3*lado3)-(lado1*lado1))/(2*lado2*lado3);
		op_b=((lado1*lado1)+(lado3*lado3)-(lado2*lado2))/(2*lado1*lado3);
		op_g=((lado2*lado2)+(lado1*lado1)-(lado3*lado3))/(2*lado2*lado1);
		alfa=(acos(op_a))*180/PI;
		beta=(acos(op_b))*180/PI;
		gamma=(acos(op_g))*180/PI;
		cout <<"Alfa: "<< alfa <<endl;
		cout <<"Beta: "<< beta <<endl;
		cout <<"Gamma: "<< gamma <<endl;
		bool noventa=true;
		double nov=90;
		cout << (alfa == nov) <<"Ques es?" << noventa<<endl;
		if(alfa==90.00||beta==90.00||gamma==90.00){
			noventa=true;
			co
		}
		s=(lado1+lado2+lado3)/2;
		area=s*(s-lado1)*(s-lado2)*(s-lado3);
		resultado=sqrt(area);
		cout <<"El Area del Triangulo es: "<< resultado<<endl;
		

	
}

int main(){
	int resp=0;
	do{
		cout <<"		MENU PRINCIPAL"<<endl
		     <<"1. Ejercicio 1"<<endl
		     <<"2. Ejercicio 2"<<endl
		     <<"3. Ejercicio 3"<<endl
		     <<"4. Salir"<<endl
		     <<"Escoja su respuesta: "<<endl;
		cin>> resp;
		switch (resp){
			case 1:
				numerosImpares();
				break;
			case 2:
				triangulos();
				break;
			case 3: 

				break;
		}
		if(resp<1||resp>4){
		cout <<"El Numero Ingresado es Invalido. Intente de Nuevo"<<endl;
		}
	}while(resp!=4);
	return 0;
}

