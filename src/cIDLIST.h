class cIDLIST {
	public:
		cID ARR[IDLNGTH];
		int ARRCNT;
		cIDLIST();
		void addID (string, string);
};

cIDLIST::cIDLIST(){
	ARRCNT = -1;
}

void cIDLIST::addID(string fn, string ln){
	ARRCNT += 1;
	ARR[ARRCNT].first_name = fn;
	ARR[ARRCNT].last_name = ln;
}