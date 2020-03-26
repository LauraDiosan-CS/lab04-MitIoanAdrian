#pragma once
#include <ostream>
//creates a Cheltuiala business object
class Cheltuiala {
private:
	int ID;
	int nrAp;
	int Sum;
	char* Tip;

public:
	Cheltuiala();
	Cheltuiala(int, int, int, const char*);
	Cheltuiala(const Cheltuiala&);
	Cheltuiala& operator=(const Cheltuiala&);
	int getID();
	void setID(int);
	int getnrAp();               
	void setnrAp(int);
	int getSum();
	void setSum(int);
	char* getTip();
	void setTip(char*);
	bool operator==(const Cheltuiala&);
	~Cheltuiala();
	friend std::ostream& operator<<(std::ostream& os, const Cheltuiala& c);

};