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
	for(int i=1;i<=num;i++){
		cout <<i<<"^3 =";
		int suma=0;
		for(int j=1;j<=i;j++){
			if(j==i){
				cout <<impar;
			}else if(j<i){
				cout <<impar<<"+";
			}	
			suma+=impar;
			impar=impar + 2;
		}
		cout <<" ="<<suma<<endl;
	}
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
		int alfa1=(int)alfa;
		int beta1=(int)beta;
		int gamma1=(int)gamma;
			if(alfa1==90||beta1==90||gamma1==90){
				cout <<"Es un Triangulo Rectangulo!!!"<<endl;
			}
		cout <<"Alfa: "<< alfa <<endl;
		cout <<"Beta: "<< beta <<endl;
		cout <<"Gamma: "<< gamma <<endl;
		s=(lado1+lado2+lado3)/2;
		area=s*(s-lado1)*(s-lado2)*(s-lado3);
		resultado=sqrt(area);
		cout <<"El Area del Triangulo es: "<< resultado<<endl;
		

	
}
void divisores(){





}


int main(){
	int resp=0;
	do{
		cout <<endl;
		cout <<"		MENU PRINCIPAL"<<endl
		     <<"1. Raiz Cubica de Impares"<<endl
		     <<"2. Areas y Angulos"<<endl
		     <<"3. Divisores"<<endl
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
				divisores();
				break;
		}
		if(resp<1||resp>4){
		cout <<"El Numero Ingresado es Invalido. Intente de Nuevo"<<endl;
		}
	}while(resp!=4);
	return 0;
}

