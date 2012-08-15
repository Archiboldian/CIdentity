class cIDLIST {
	public:
		cIDLIST ();
		cID ARR[CIDLNGTH];
		int ARRCNT;
		void addID (std::string, std::string);
		cID getRND ();
		void loadDICT (std::string);
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

void cIDLIST::loadDICT(std::string path){
	std::ifstream fin(path.c_str());
	std::string line;
	while(std::getline(fin, line)) {
		std::string buf; // Have a buffer string
    	std::stringstream ss(line); // Insert the string into a stream
    	std::vector<std::string> tokens; // Create vector to hold our words
    	while (ss >> buf)
    	    tokens.push_back(buf);
		cIDLIST::addID(tokens[0], tokens[1]);
	}
}

cID cIDLIST::getRND(){
	if(ARRCNT != 0){
		cID rndcid;
		rndcid.first_name = cIDLIST::ARR[rand() % (ARRCNT+1)].first_name;
		rndcid.last_name = cIDLIST::ARR[rand() % (ARRCNT+1)].last_name;
		return rndcid;
	}else{
		std::cout << "CIdentity: No loaded name options..." << std::endl;
	}
}