#include <iostream>

#define CIDLNGTH 100
#include "src/main.h"

// this is probably the dumbest
// and most useless library
// I have ever seen...

using namespace std;

int main(){
	
	cIDLIST IDs;
	IDs.loadDICT("namedictionary.ndict");
	
	for(int i;i<10;i++){
		cID rndcid = IDs.getRND();
		cout << rndcid.first_name << " " << rndcid.last_name << endl;
	}
	
	return 0;
}