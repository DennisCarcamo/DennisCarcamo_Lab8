#pragma once
#include "obras.h"
#include <string>
using std::string;

class Arquitectonicos:public Obras{
	string tipoterreno;
 public:
 	Arquitectonicos(string,string,string,string);
 	string toString()const;
 
};