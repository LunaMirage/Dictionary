#include "StdAfx.h"
#include "List.h"


List::List(set<string> &textData)
{	
	ptr = textData;
	display();
	while(command!='q'){
		cout << "Awating your command: ";
		cin >> command;
		switch(command){
			case 'a':
				add(text);
				break;
			case 'c':
				check(text);
				break;
			case 'r':
				remove(text);
				break;
			case 'd':
				display();
				break;
			case 'q':
				//system closes
				break;
			default:
				cout << "Invalid command. Please retype in command." << endl;
				break;
			cout << endl;
			cout << endl;
			cout << endl;
		}
	}
}

void List::add(string text){
	int test = 0;
	cout << "Please enter in the word that you add to the dictionary" << endl;
	cin >> text;
	for(iter = ptr.begin(); iter!=ptr.end();iter++){
		if(*iter == text){
			cout << "The word you entered in was already in the dictionary. " << endl;
			test=1;
		}
	}
	if(test == 0)
		ptr.insert(text);
}

void List::check(string text){
	int test = 0;
	cout << "Please enter in the word that you wish to check is in the dictionary. " << endl;
	cin >> text;
	for(iter = ptr.begin(); iter!=ptr.end();iter++){
		if(*iter == text){
			cout << "The word you entered is in the dictionary. " << endl;
			test=1;
		}
	}
	if(test == 0)
		cout << "The word you entered in is not in the dictionary. " << endl;
}

void List::remove(string text){
	int test = 0;
	cout << "Please enter in the word that you wish to delete. " << endl;
	cin >> text;
	for(iter = ptr.begin(); iter!=ptr.end();){
		if(*iter== text){
			ptr.erase(iter++);			// Dani web is awesome =p.
			text=1;
		}					// have to increment iterator otherwise you delete the iterator too =/.
		else
			iter++;
	}
	if(test == 0)
		cout << "The word/text you entered was not in the dictionary." << endl;
}

void List::display(){
	cout << " Dictionary " << endl;
	for(iter = ptr.begin(); iter!=ptr.end(); iter++)
		cout << *iter << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Please enter in a command" << endl;
	cout << "The commands are c to check a word, r to remove, a to add, and d to display. Followed by enter." << endl;
	cout << "To quit the program press q followed by enter." << endl;
}


List::~List(void)
{

}
