#include <iostream>

#define CIDLNGTH 100
#include "src/main.h"

// this is probably the dumbest
// and most useless library
// I have ever seen...

using namespace std;

int main(){
	
	cIDLIST idlst;
	idlst.addID(("James"),("Davids"));
	idlst.addID(("Harry"),("Barns"));
	idlst.addID(("Arthur"),("Rickold"));
	idlst.addID(("John"),("Smith"));
	
	cID rndcid = idlst.getRND();
	cout << rndcid.first_name << " " << rndcid.last_name << endl;
	rndcid = idlst.getRND();
	cout << rndcid.first_name << " " << rndcid.last_name << endl;
	rndcid = idlst.getRND();
	cout << rndcid.first_name << " " << rndcid.last_name << endl;
	
	return 0;
}