#include <iostream>
using namespace std;
struct fecha
{
	int dia,mes,anyo;
};
int main(int argc, char** argv) {
	struct fecha per1,per2;
	cout<<"INGRESE LA FECHA DE NACIMIENTO DE LA PRIMERA PERSONA (dd/mm/aa):"<<endl;
	cin>>per1.dia;
	cin>>per1.mes;
	cin>>per1.anyo;
	cout<<"INGRESE LA FECHA DE NACIMIENTO DE LA SEGUNDA PERSONA (dd/mm/aa):"<<endl;
	cin>>per2.dia;
	cin>>per2.mes;
	cin>>per2.anyo;
	if(per1.anyo==per2.anyo)
	{
		if(per1.mes==per2.mes)
		{
			if(per1.dia==per2.dia)
			{
				cout<<"TIENE LA MISMA EDAD."<<endl;
			}
			else
			{
				if(per1.dia<per2.dia)
				{
					cout<<"LA PERSONA 1 ES MAYOR."<<endl;
				}
				else
				{
					cout<<"LA PERSONA 2 ES MAYOR."<<endl;
				}
			}
		}
		else
		{
				if(per1.mes<per2.mes)
				{
					cout<<"LA PERSONA 1 ES MAYOR."<<endl;
				}
				else
				{
					cout<<"LA PERSONA 2 ES MAYOR."<<endl;
				}
		}
	}
	else
	
		if(per1.anyo<per2.anyo)
		{
			cout<<"LA PERSONA 1 ES MAYOR."<<endl;
		}
		else
		{
		cout<<"LA PERSONA 2 ES MAYOR."<<endl;
		}
	return 0;
}
