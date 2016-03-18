#pragma once
#include "obras.h"
#include <string>
using std::string;

class Escultura : public Obras{
	string material;
	int peso;
 public:
 	Escultura(string,string,string,string,int);
 	string toString()const;
 
};