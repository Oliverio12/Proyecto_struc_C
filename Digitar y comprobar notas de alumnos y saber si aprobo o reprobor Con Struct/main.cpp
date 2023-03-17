#include <iostream>
using namespace std;
struct alumno
{
	string nombre,NIE;
	float ex1,ex2,ex3,prom;
};
int main(int argc, char** argv) {
	struct alumno alum;
	cout<<"DIGITE NOMBRE: ";
	cin>>alum.nombre;
	cout<<"DIGITE NIE: ";
	cin>>alum.NIE;
	cout<<"DIGITE LAS NOTAS"<<endl;
	cout<<"Examen 1: ";
	cin>>alum.ex1;
	cout<<"Examen 2: ";
	cin>>alum.ex2;
	cout<<"Examen 3: ";
	cin>>alum.ex3;
	alum.prom=(alum.ex1+alum.ex2+.ex3)/3;
	if(alum.prom>=7)
	{
		cout<<alum.nombre<<"Esta Aprobado."<<endl;
	}
	else
	{
		cout<<alum.nombre<<"Esta Reprobado"<<endl;
	}
	
	return 0;
}
