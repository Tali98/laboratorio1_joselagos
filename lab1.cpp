#include<iostream>
#include<math.h>

#define PI 3.14159265


using std::cout;
using std::cin;
using std::endl;

int main(){
	cout<<"MENU"<<endl;
	cout<<"1.Ejercicio 1 : Cubos e Impares"<<endl;
	cout<<"2.Ejercicio 2 : Triangulo"<<endl;
	cout<<"3.Ejercicio 3 : Divisores Impares"<<endl;
	cout<<"Ingrese su opcion "<<endl;
	int menu=0;
	cin>>menu;
	while(menu!=0 && menu<4){
		switch (menu){
			case 1:
				cout<<"Ingrese cuantos cubos desea que sean mostrados"<<endl;
				int repeticiones;
				cin>>repeticiones;
				if(repeticiones == 0){
					cout<<"0"<<endl;

				}else{
					int numero=1;
					for (int a = 1 ; a<=repeticiones ; a++){
						cout<<a<<"^3"<<" = ";
						for(int b = 1 ; b<=a ; b++){
						
							if (b < a){
								cout<<numero<<"+";
							}else{
								cout<<numero<<"=";
							}
							numero++;
							numero++;
						}
						cout<<a*a*a<<endl;
						numero=numero;
						
					} 
				}
			break;
			case 2:
				cout<<"Ingrese la hipotenusa del triangulo"<<endl;
				double hipotenusa;
				cin>>hipotenusa;
				cout<<"Ingrese cateto 1 o base"<<endl;
				double cateto;
				cin>>cateto;
				cout<<"Ingrese cateto 2 o el opuesto a la hipotenusa"<<endl;
				double cateto2;
				cin>>cateto2;
				double anguloAlfa = 0;
				double anguloBeta = 0;
				double anguloY    = 0;
				double respuesta = 0;
				respuesta = (cateto2*cateto2) - (hipotenusa*hipotenusa) - (cateto * cateto);
				respuesta = respuesta/-(2*hipotenusa*cateto);
				respuesta = asin(respuesta) * 180 / PI;
				cout<<respuesta<<endl;
				anguloAlfa = respuesta;
				cout<<"Angulo Alfa es igual a = "<< anguloAlfa<<endl;
				respuesta = (hipotenusa*hipotenusa) - (cateto2*cateto2) - (cateto * cateto);
                                respuesta = respuesta/-(2*cateto2*cateto);
                                respuesta = acos(respuesta) * 180 / PI;
                                anguloBeta = respuesta;
                                cout<<"Angulo Beta es igual a = "<< anguloBeta<<endl;
				respuesta = (cateto*cateto) -  (cateto2 * cateto2) - (hipotenusa*hipotenusa);
                                respuesta = respuesta/-(2*hipotenusa*cateto2);
                                respuesta = acos(respuesta) * 180 / PI;
                                anguloY = respuesta;
                                cout<<"Angulo Y rara  es igual a = "<< anguloY<<endl;
				respuesta = anguloAlfa + anguloBeta + anguloY;
				if(respuesta == 180){
					if(anguloBeta == 90){
						cout<<"Si es angulo recto"<<endl;
					}else{
						cout<<"No es angulo recto"<<endl;
					}
				}else{
					cout<<"Ese no es un triangulo"<<endl;
				}
				double s = cateto2 + hipotenusa + cateto;
				s = s/2;
				double area = s*(s-cateto2)*(s-hipotenusa)*(s-cateto);
				area = sqrt(area);
				cout<<"El area del triangulo o no triangulo es: "<<area<<endl;	
			break;
		}
		cout<<"Ingrese una nueva opcion"<<endl;
		cin>>menu;
	}
}
