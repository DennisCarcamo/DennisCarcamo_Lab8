#include "obras.h"
#include "disenosArquitectonicos.h"
#include <string>
#include <sstream>
using std::stringstream;

Arquitectonicos::Arquitectonicos(string name, string autor, string fechaIngreso, string tipoterreno):Obras (name,autor,fechaIngreso), tipoterreno(tipoterreno){
}

string Arquitectonicos::toString()const{
	stringstream ss;
	ss<<"disenos Arquitectonicos "<<tipoterreno; 
	return ss.str();
}