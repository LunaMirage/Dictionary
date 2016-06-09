#include "StdAfx.h"
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <set>
using namespace std;


class List
{
private:
	set<string> ptr;
	set<string>::iterator iter;
	string text;						// User entered text
	char command;						// Command that the user entered

public:
	void add(string text);
	void check(string text);
	void remove(string text);
	void display();
	List(set<string> &textData);
	~List(void);

};

