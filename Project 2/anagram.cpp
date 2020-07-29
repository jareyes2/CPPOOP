#include <iostream>
#include <string>
using namespace std;

int main() {

	string text;
	string text2;
	bool anagram = true;
	
	cout << "Please enter a string: ";
	cin >> text;
	cout << "Please enter another string: ";
	cin >> text2;


	if (text.length() != text2.length()) {
		anagram = false;
	}

	for(int i = 0; i < text.length(); i++) {
		if (text2.find(text.at(i)) == string::npos) {
			cout << "The letter " << text.at(i) << " isn't found." << endl;
			anagram = false;
			break;
		}
	}
	
	if(anagram)
		cout << "An anagram!" << endl;
	else
		cout << "Not an anagram." << endl;

}