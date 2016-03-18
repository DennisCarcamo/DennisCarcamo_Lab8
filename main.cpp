#include "obras.h"
#include "escultura.h"
#include "literatura.h"
#include "pintura.h"
#include "disenosArquitectonicos.h"

#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main(int argc, char*argv[]){
	int opcion;
	vector <Obras> obrassvector;
	vector <Obras> obraseliminadas;
	while(true){
		cout<<"***********************MENU*************************"<<endl;
		cout<<"1 para agregar obras"<<endl
			<<"2 para Listar"<<endl
			<<"3 para Transferir Obras "<<endl 
			<<"4 para salir"<<endl;
			cin>>opcion;
		if (opcion==1){
			int opcionAgregar;
			cout<<" "<<endl;
			cout<<"************ agregar Obras ******************"<<endl
				<<"1-Para agregar literatura"<<endl
				<<"2-Para agregar Escultura"<<endl
				<<"3-Para agregar Pintura"<<endl
				<<"4-Para agregar Disenos Arquitectonicos"<<endl;
				cin>>opcionAgregar;

				if (opcionAgregar==1){
					cin.ignore();
					string nombre, autor, fecha, genero, epoca;
					cout<<" "<<endl;
					cout<<"************ agregando literatura ******************"<<endl;
					cout<<"Ingrese el nombre de Literatura"<<endl;
					getline(cin,nombre);
					cout<<"Ingrese el nombre del autor"<<endl;
					getline(cin,autor);
					cout<<"Ingrese la fecha"<<endl;
					getline(cin,fecha);
					cout<<"Ingrese el genero"<<endl;
					cin>>genero;
					cout<<"Ingrese la Epoca"<<endl;
					cin>>epoca;
									
					obrassvector.push_back(Literatura(nombre,autor,fecha,genero, epoca));

				}else if (opcionAgregar==2){
					cin.ignore();
					string nombre, autor, fecha, material;
					int  peso;
					cout<<" "<<endl;
					cout<<"************ agregando Escultura ******************"<<endl;
					cout<<"Ingrese el nombre de Escultura"<<endl;
					getline(cin,nombre);
					cout<<"Ingrese el nombre del autor"<<endl;
					getline(cin,autor);
					cout<<"Ingrese la fecha"<<endl;
					getline(cin,fecha);
					cout<<"Ingrese el material con que fue creado"<<endl;
					cin>>material;
					cout<<"Ingrese el peso de la Escultura"<<endl;
					cin>>peso;
					Escultura esc(nombre,autor,fecha, material, peso);				
					obrassvector.push_back(esc);
					
				}else if (opcionAgregar==3){
					cin.ignore();
					string nombre, autor, fecha,materialLienzo, tecnica;
					cout<<" "<<endl;
					cout<<"************ agregando Pintura ******************"<<endl;
					cout<<"Ingrese el nombre de Pintura"<<endl;
					getline(cin,nombre);
					cout<<"Ingrese el nombre del autor"<<endl;
					getline(cin,autor);
					cout<<"Ingrese la fecha"<<endl;
					getline(cin,fecha);
					cout<<"Ingrese el Material del Lienzo"<<endl;
					cin>>materialLienzo;
					cout<<"Ingrese el nombre de la tecnica que utilizo"<<endl;
					cin>>tecnica;
					Pintura pin(nombre,autor,fecha,materialLienzo, tecnica);				
					obrassvector.push_back(pin);
					
				}else if (opcionAgregar==4){
					cin.ignore();
					string nombre, autor, fecha, tipoterreno;
					cout<<" "<<endl;
					cout<<"************ agregando Diseno Arquitectonicos ******************"<<endl;
					cout<<"Ingrese el nombre del Diseno"<<endl;
					getline(cin,nombre);
					cout<<"Ingrese el nombre del autor"<<endl;
					getline(cin,autor);
					cout<<"Ingrese la fecha"<<endl;
					getline(cin,fecha);
					cout<<"Ingrese el tipo del terreno"<<endl;
					cin>>tipoterreno;
					Arquitectonicos arq(nombre,autor,fecha,tipoterreno);
					obrassvector.push_back(arq);
				}




			
		}else if(opcion==2){
			int vectorelegido;
			cout<<"********************LISTAR**********************"<<endl;
			cout<<"precione 1 Para ver las Obras Del Museo de arte Britanico"<<endl
				<<"precione 2 Para vel las Obras Transferidas"<<endl;
			cin>>vectorelegido;

			if (vectorelegido==1){
				for (int i = 0; i < obrassvector.size(); i++){			
					cout<<i+1<<" "<<obrassvector.at(i).toString()<<endl;
				}
			}else if(vectorelegido==2){
				for (int i = 0; i < obraseliminadas.size(); i++){			
					cout<<i+1<<" "<<obraseliminadas.at(i).toString()<<endl;
				}
			}
			

		}else if(opcion==3){
			int indiceeliminar;
			cout<<"***********************Transferir**********************"<<endl;
			cout<<"Seleccione la obra que sera transferida"<<endl;
			for (int i = 0; i < obrassvector.size(); i++){			
				cout<<i<<" "<<obrassvector.at(i).toString()<<endl;
			}
			cin>>indiceeliminar;
			obraseliminadas.push_back(obrassvector.at(indiceeliminar));
			obrassvector.erase(obrassvector.begin()+indiceeliminar);

		}else if (opcion==4){
			break;
		}
	}



	return 0;
}
