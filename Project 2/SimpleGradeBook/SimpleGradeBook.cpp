#include "SimpleGradeBook.h"
#include <iostream>
using namespace std;

// Default constructor
SimpleGradeBook::SimpleGradeBook() {
	//cout << "Default constructor called" << endl;
	courseName = "_";
	courseNumber = "--";
	finalScore = 0;
}

// Parameterized constructor
SimpleGradeBook::SimpleGradeBook(string _courseName, string _courseNumber, int _finalScore) {
	//cout << "P3 constructor called" << endl;
	courseName = _courseName;
	courseNumber = _courseNumber;
	finalScore = _finalScore;
}


// Member functions
void SimpleGradeBook::setFinalScore(int _finalScore) {
	finalScore = _finalScore;
}
int SimpleGradeBook::getFinalScore() const {
	return finalScore;
}
void SimpleGradeBook::displayMessage() const {
	cout << endl << "The course name is " << courseName << endl;
	cout << "The course number is " << courseNumber << endl;
	cout << "The course grade is " << getFinalScore() << endl;
}