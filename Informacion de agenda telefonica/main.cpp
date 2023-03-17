#include <iostream>
using namespace std;

struct fecha
{
	unsigned int dia, mes, anyo;
};

struct agenda_personal
{
	char nombre[30];
	char telefono[10];
	struct fecha f_cumple;
};

void leerAgenda(struct agenda_personal pag[], int ncont);
void imprimirAgenda(struct agenda_personal pag[], int ncont);

int main(int argc, char** argv) {
	struct agenda_personal ag[100];
	int npers;
	cout<<"cuantos contactos tiene? ";
	cin>>npers;
	cout<<"\n\t******INTRODUCIR INFORMACION DEL CONTACTO******\n";
	leerAgenda(ag,npers);
	cout<<"\n\t******CONTENIDO DE LA AGENDA TELEFONICA******\n";
	imprimirAgenda(ag,npers);
	cout<<"\n\n\n";
	return 0;
}

void leerAgenda(struct agenda_personal agp[], int ncontactos)
{
	int c;
	for(c=0;c<ncontactos;c++)
	{
		cout<<"\nContactos #"<<c+1<<endl;
		cout<<"nombre: ";
		cin>>agp[c].nombre;
		cout<<"Telefono: ";
		cin>>agp[c].telefono;
		cout<<"Fecha de cumpleanyos: "<<endl<<"Dia: ";
		cin>>agp[c].f_cumple.dia;
		cout<<"Mes: ";
		cin>>agp[c].f_cumple.mes;
		cout<<"Anyo: ";
		cin>>agp[c].f_cumple.anyo;	
	}
}

void imprimirAgenda(struct agenda_personal agp[], int ncontactos)
{
	int c;
	for(c=0;c<ncontactos;c++)
	{
		cout<<"\n\nContactos #"<<c+1<<endl;
		cout<<"Nombre: ";
		cout<<agp[c].nombre<<endl;
		cout<<"Telefono: ";
		cout<<agp[c].telefono<<endl;
		cout<<"FECHA DE CUMPLEANYOS (dd-mm-aa): ";
		cout<<agp[c].f_cumple.dia<<"/"<<agp[c].f_cumple.mes<<"/"<<agp[c].f_cumple.anyo<<endl;
	}
}

