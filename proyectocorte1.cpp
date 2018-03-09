#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int cantidad;
int *cant_usu=&cantidad;

struct pelicula{
	char nombre[30];
	int peli_id;
	char duracion[50];
	char tipo_vista[30];
	char sala[30];
	char hora_inicio[30];
	int cant_peli;
}peli[10], *ppeli=&peli[10];

struct usuario{
	char nom_usu[30];
	int id;
	int boletos;
	int cant_usu;
	struct pelicula;
}usu[50],*pusu =&usu[50];

void registro_info(){
	int i,j;
	system("cls");
	cout<<"\n\n\t USTED DECIDIO REGISTRAR INFORMACION DE PELICULAS:\n\n";
	cout<<"Ingrese la cantidad de peliculas que desee registrar:";
	cin>>ppeli->cant_peli;
	for(i=1;i<=ppeli->cant_peli;i++){
		fflush(stdin);
		cout<<"\n\n"<<i<<".)Ingrese nombre de la pelicula:";
		cin>>ppeli[i].nombre;
		cout<<"\nIngrese la Id de la pelicula:";
		cin>>ppeli[i].peli_id;
		cout<<"\n"<<i<<".)Ingrese la duracion de la pelicula:";
		cin>>ppeli[i].duracion;
		fflush(stdin);
		cout<<"\n"<<i<<".)Ingrese el tipo de vision de la pelicula(3D, 2D):";
		cin>>ppeli[i].tipo_vista;
		cout<<"\n"<<i<<".)Ingrese la hora de inicio de la pelicula:";
		cin>>ppeli[i].hora_inicio;
		cout<<"\n"<<i<<".)Ingrese en que sala sera la pelicula:";
		cin>>ppeli[i].sala;
		
		cout<<"\n\n";
	}
	system("pause");
	system("cls");
}

void ver_info(){
	int i, j;
	system("cls");
	cout<<"\n\n\t USTED DECIDIO VER INFORMACION DE PELICULAS Y REGISTRAR COMPRA DE USUARIO:\n\n";
	cout<<"Primero se mostrara la informacion de las peliculas y luego ingresara compra del usuario.\n";
	cout<<"Mire la informacion de las diferentes peliculas:";
	for(i=1;i<=ppeli->cant_peli;i++){
		fflush(stdin);
		cout<<"\n"<<i<<".)Nombre de la pelicula:"<<ppeli[i].nombre;
		cout<<"\nId de la pelicula:"<<ppeli[i].peli_id;
		cout<<"\n Duracion de la pelicula:"<<ppeli[i].duracion;
		cout<<"\n Tipo de vista:"<<ppeli[i].tipo_vista;
		cout<<"\n Hora de inicio:"<<ppeli[i].hora_inicio;
		cout<<"\n Sala de la funcion:"<<ppeli[i].sala;
		cout<<"\n\n";
	}
	cout<<"Escoja cuantos usuarios desea ingresar:";
	cin>>pusu->cant_usu;
	for(i=1;i<=pusu->cant_usu;i++){
		fflush(stdin);
		cout<<"\n\n"<<i<<".)Ingrese nombre del usuario:";
		cin>>pusu[i].nom_usu;
		cout<<"\nIngrese Id del usuaurio:";
		cin>>pusu[i].id;
		cout<<"\nIngrese la id de la pelicula que desea ver el usuario:";
		cin>>ppeli[i].peli_id;
		cout<<"\nIngrese la cantidad de boletos que desee comprar:";
		cin>>pusu[i].boletos;		
	}
	system("pause");
	system("cls");
}

void select(){
int num, i,j;
system("cls");
cout<<"\n\n\tUSTED DECIDIO VER INFORMACION DEL USUARIO Y MODIFICAR.\n\n";
cout<<"\n\n Ingrese la cantidad de usuarios que desee registrar:";
cin>>pusu->cant_usu;
for(i=1;i<=pusu->cant_usu;i++){
	fflush(stdin);
	cout<<"\n\n"<<i<<".)Nombre usuario:"<<pusu[i].nom_usu;
	cout<<"\nId del usuario:"<<pusu[i].id;
	cout<<"\nBoletos comprados son:"<<pusu[i].boletos;
	cout<<"\nla id de la pelicula es:"<<ppeli[i].peli_id;
}
while(num!=3){
cout<<"\n\nDesea modificar algun campo:\n";
cout<<"1.)Modificar pelicula e id.\n";
cout<<"2.)Modificar usuario e id.\n";
cout<<"3.)Regresar a menu anterior.\n";
cout<<"Ingrese digito para seleccionar:";
cin>>num;
fflush(stdin);
switch(num){
	case 1:
		cout<<"\nnIngrese si la pelicula que desea modificar esta en primera posicion o en algun otra(Ejemplo: ya sea 1.) o ya sea 2.)...etc).";
		cout<<"\nIngrese posicion:";
		cin>>i;
		cout<<"\n\nIngrese el nuevo nombre para la pelicula:";
		cin>>ppeli[i].nombre;
		cout<<"\nIngrese el nuevo id para la pelicula:";
		cin>>ppeli[i].peli_id;
		cout<<"\n\nLa modificacion se ha guardado correctamente.\n\n";
		system("pause");
		system("cls");
		break;
	case 2:
		cout<<"\n\nIngrese si el usuario que desea modificar esta en la primera posicion o en algun otra(Ejemplo: ya sea 1.) o ya sea 2.)...etc).";
		cout<<"\nIngrese posicion:";
		cin>>i;
		cout<<"\n\nIngrese el nuevo nombre del usuario:";
		cin>>pusu[i].nom_usu;
		cout<<"\nIngrese el nuevo id de la persona:";
		cin>>pusu[i].id;
		cout<<"\n\nLa modificacion se ha guardado correctamente.\n\n";
		system("pause");
		system("cls");
		break;
		default:
			cout<<"Gracias por ingresar, espero haber ayudado con sus necesidades.\n\n";
			system("pause");
			system("cls");
		}		
	}
}

int main(int argc, char** argv) {
	int num,i,j;
	
	system("cls");
	while(num!=4){
	cout<<"\n\n\t MENU DEL REGISTROL DEL CINE\n\n";
	cout<<"Escoja una opcion para ver o editar informacion\n";
	cout<<"1.)Registrar Informacion de peliculas.\n";
	cout<<"2.)Ver Informacion de la Pelicula y Registrar compra de usuario.\n";
	cout<<"3.)Ver informacion del usuario y modificar usuario o pelicula.\n";
	cout<<"4.)Salir del Sistema.\n";
	cout<<"Ingrese numero:";
	cin>>num;
	switch(num){
		case 1:
		registro_info();
		break;
		case 2:
		ver_info();
		break;
		case 3:
		select();
		break;
		default:
		system("cls");
		cout<<"\n\nGracias por ingresar, espero haberlo satisfecho.";
		system("pause");	
	}
	}
	
	return 0;
}

