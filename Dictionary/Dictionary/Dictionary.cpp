// Dictionary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Filereader.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string fileName;
  cout << "Please enter in the name of the text file" << endl;
  cout << ":";
  cin >> fileName;
  Filereader data(fileName);
  return 0;
}

