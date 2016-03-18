#include "obras.h"
#include "pintura.h"
#include <string>
#include <sstream>
using std::stringstream;

Pintura::Pintura(string name, string autor, string fechaIngreso, string materialLienzo, string tecnica):Obras (name,autor,fechaIngreso), materialLienzo(materialLienzo), tecnica(tecnica){
}

string Pintura::toString()const{
	stringstream ss;
	ss<<"Pintura "<<materialLienzo<<" , "<<tecnica; 
	return ss.str();
}
