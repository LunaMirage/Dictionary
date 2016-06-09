#include "StdAfx.h"
#include "Filereader.h"
using namespace std;


Filereader::Filereader(string fileName)
{
	iostream(fileName);
	List dictionary(textData);
}

void Filereader::iostream(string fileName){
  ifstream wordFile(fileName);
  string text;
  if (wordFile.is_open())
  {
    if ( wordFile.good() ){
		while (wordFile.good())
		{
		  getline(wordFile,text);
		  if(text.size()!=0)
			  text = lowerCase(text);
		  textData.insert(text);
		}
	}
	else{
		cout << "Error " << endl;
		wordFile.close();
	}
  }
  else
	  cout << "Not working =*(" << endl;
}

string Filereader::lowerCase(string text){
	for(int index=0;index<text.size();index++)
		text[index] = tolower(text[index]);
	return text;
}

Filereader::~Filereader(void)
{
}
