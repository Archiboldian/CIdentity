class cIDLIST {
	public:
		cIDLIST ();
		cID ARR[CIDLNGTH];
		int ARRCNT;
		void addID (std::string, std::string);
		cID getRND ();
};

cIDLIST::cIDLIST(){
	srand ( time(NULL) );
	ARRCNT = -1;
}

void cIDLIST::addID(std::string fn, std::string ln){
	ARRCNT += 1;
	ARR[ARRCNT].first_name = fn;
	ARR[ARRCNT].last_name = ln;
}

cID cIDLIST::getRND(){
	cID rndcid;
	rndcid.first_name = cIDLIST::ARR[rand() % (ARRCNT+1)].first_name;
	rndcid.last_name = cIDLIST::ARR[rand() % (ARRCNT+1)].last_name;
	return rndcid;
}