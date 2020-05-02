/*EJERCICIO #1

Una empresa tiene diez almacenes y necesita crear un programa que lea las ventas mensuales de los diez 
almacenes, calcular la media de ventas y obtener un listado de los almacenes cuyas ventas mensuales son
superiores a la media.*/

#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <iomanip>
void insertar();
void mp();
using namespace std;
int main(){
	mp();
}
void insertar(){
 int mes;
 float venta,alma1,alma2,alma3,alma4,alma5,alma6,alma7,alma8,alma9,alma10;
 ofstream db;
 
 cout<<"-----------------------------"<<endl;
 cout<<"INGRESO DE VENTAS DE CADA ALMACEN"<<endl;
 cout<<"-----------------------------"<<endl;
 cout<<"Ingrese el mes de ventas en numeros: "<<endl;
 cin>>mes;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 1: "<<endl;
 cin>>alma1;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 2: "<<endl;
 cin>>alma2;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 3: "<<endl;
 cin>>alma3;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 4: "<<endl;
 cin>>alma4;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 5: "<<endl;
 cin>>alma5;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 6: "<<endl;
 cin>>alma6;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 7: "<<endl;
 cin>>alma7;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 8: "<<endl;
 cin>>alma8;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 9: "<<endl;
 cin>>alma9;
 fflush(stdin);
 cout<<"Ingrese el total de ventas de almacen 10: "<<endl;
 cin>>alma10;
 
 /*const auto obj = regex{ " " };
 const auto repl = string{ "_" };
 const auto valor = nombre;*/
 //regex_replace(valor, obj, repl)

   
 try{
 	db.open("Empresa-Almacenes.txt",ios::app);
	db<<mes<<"\t"<<alma1<<"\t"<<alma2<<"\t"<<alma3<<"\t"<<alma4<<"\t"<<alma5<<"\t"<<alma6<<"\t"<<alma7<<"\t"<<alma8<<"\t"<<alma9<<"\t"<<alma10<<endl;
	db.close();  
 }
 catch(exception X){
 	cout<<"Error";
 	system("Pause");
 }
}

void reporte(){
	int mes1;
    float venta1,alma11,alma21,alma31,alma41,alma51,alma61,alma71,alma81,alma91,alma101,opera1,opera2,opera3,opera4,opera5,opera6,opera7,opera8,opera9,opera10,operatodo,i,suma;
    ifstream db;
    int mayorventa = -1;
	
try{
 	//cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<" MES  /"<<" VENTA ALMA1  /"<<" VENTA ALMA2  /" <<" VENTA ALMA3  /"<<" VENTA ALMA4  /"<<" VENTA ALMA5  /"<<" VENTA ALMA6  /"<<" VENTA ALMA7  /"<<" VENTA ALMA8  /"<<" VENTA ALMA9  /"<<" VENTA ALMA10/"<<endl;
	//cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl; 	
	db.open("Empresa-Almacenes.txt",ios::in);
	while(db>>mes1>>alma11>>alma21>>alma31>>alma41>>alma51>>alma61>>alma71>>alma81>>alma91>>alma101){
		cout<<"  "<<mes1<<"         "<<"Q"<<alma11<<"          "<<"Q"<<alma21<<"           "<<"Q"<<alma31<<"            "<<"Q"<<alma41<<"          "<<"Q"<<alma51<<"           "<<"Q"<<alma61<<"           "<<"Q"<<alma71<<"           "<<"Q"<<alma81<<"           "<<"Q"<<alma91<<"           "<<"Q"<<alma101<<"        "<<endl;
		
		if (alma11,alma21,alma31,alma41,alma51,alma61,alma71,alma81,alma91,alma101>mayorventa){
			mayorventa = alma11,alma21,alma31,alma41,alma51,alma61,alma71,alma81,alma91,alma101;
			
		}
		
		i++;
		opera1 += alma11;
		opera2 += alma21;
		opera3 += alma31;
		opera4 += alma41;
		opera5 += alma51;
		opera6 += alma61;
		opera7 += alma71;
		opera8 += alma81;
		opera9 += alma91;
		opera10 += alma101;
		suma+= alma11,alma21,alma31,alma41,alma51,alma61,alma71,alma81,alma91,alma101;
	}
	
	db.close();
	cout<<"                                           "<<endl;  
	cout<<"-------------------------------------------"<<endl; 
	cout<<"Venta mas Alta: "<<mayorventa<<endl;
	cout<<"-------------------------------------------"<<endl; 
	cout<<"Promedio de Ventas Global: "<<suma/i<<endl;
	cout<<"-------------------------------------------"<<endl; 
	cout<<"El total de todas las ventas es de: Q"<<alma11+alma21+alma31+alma41+alma51+alma61+alma71+alma81+alma91+alma101<<endl;
	cout<<"-------------------------------------------"<<endl;
 }
 catch(exception X){
 	cout<<"Error";
 	system("Pause");
 }
} 
 
 
void mp(){
		int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<"-------------------------------"<<"\n";
		cout<<" Menu Principal De La Empresa"<<"\n";
		cout<<"-------------------------------"<<"\n";
		cout<<" 1 - Ingresar Ventas de cada almacen "<<"\n";
		cout<<" 2 - Reporte "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			insertar();			
		}
		else if (resp==2){		
			system("CLS");
			reporte();
			system("Pause");
	}
		else if (resp==3)
			break;
		else 
			break;
		
	} while(resp!=5);	
}