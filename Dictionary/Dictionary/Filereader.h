#include "StdAfx.h"
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <ctype.h>
#include "List.h"
#include <vector>
using namespace std;

class Filereader
{
private:
	set<string> textData; 

public:
	void iostream(string fileName);
	string lowerCase(string text);
	Filereader(string fileName);
	~Filereader(void);
};

