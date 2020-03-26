#include "Cheltuiala.h"
#include <ostream>
#include <string.h>

Cheltuiala::Cheltuiala() {
	ID = 0;
	nrAp = 0;
	Sum = 0;
	Tip = NULL;
}

Cheltuiala::Cheltuiala(int ID, int nrAp, int Sum,const char* Tip) {
	this->ID = ID;
	this->nrAp = nrAp;
	this->Sum = Sum;
	this->Tip = new char[strlen(Tip) + 1];
	strcpy_s(this->Tip, strlen(Tip) + 1, Tip);

}

Cheltuiala::Cheltuiala(const Cheltuiala& c) {
	this->ID = c.ID;
	this->nrAp = c.nrAp;
	this->Sum = c.Sum;
	this->Tip = new char[strlen(c.Tip) + 1];
	strcpy_s(this->Tip, strlen(c.Tip) + 1, c.Tip);
}

int Cheltuiala::getID() {
	return ID;
}

void Cheltuiala::setID(int id) {
	ID = id;
}

int Cheltuiala::getnrAp() {
	return nrAp;
}

void Cheltuiala::setnrAp(int np) {
	nrAp = np;
}

int Cheltuiala::getSum() {
	return Sum;
}

void Cheltuiala::setSum(int sum) {
	Sum = sum;
}

char* Cheltuiala::getTip() {
	return Tip;
}

void Cheltuiala::setTip(char* tip) {
	if(Tip) delete[]Tip;
	Tip = new char[strlen(tip) + 1];
	strcpy_s(Tip, strlen(tip) + 1, tip);
}

Cheltuiala::~Cheltuiala() {
	nrAp = -1;
	Sum = -1;
	if (Tip) delete[]Tip;
	Tip = NULL;
}

Cheltuiala& Cheltuiala::operator=(const Cheltuiala& c) {
	if (this == &c) return *this; //self-assignment
	nrAp = c.nrAp;
	Sum = c.Sum;
	Tip = new char[strlen(c.Tip) + 1];
	strcpy_s(Tip, strlen(c.Tip) + 1, c.Tip);
	return *this;
}

bool Cheltuiala::operator==(const Cheltuiala& c) {
	return (nrAp == c.nrAp) and (Sum == c.Sum) and (strcmp(Tip, c.Tip) == 0);
}

std::ostream& operator<<(std::ostream& os, const Cheltuiala& c)
{
	os << "ID: "<<c.ID<<" "<<"Numarul apartamentului: " << c.nrAp <<" "<< "Tipul cheltuielii: " << c.Tip <<" " << "Suma: " << c.Sum;
	return os;
}