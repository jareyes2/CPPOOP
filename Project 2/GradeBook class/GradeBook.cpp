#include "GradeBook.h"
#include <iostream>
using namespace std;

// Default constructor
GradeBook::GradeBook() {
	cout << "In the default constructor" << endl;
	courseName = "_";
	courseNumber = "--";
	final_score = nullptr;
}

// Parameterized constructors
GradeBook::GradeBook(string _courseName) {
	cout << "In P1 constructor" << endl;
	courseName = _courseName;
	setCourseNumber("----");
	final_score = nullptr;
	//final_score = new int;
}

GradeBook::GradeBook(string _courseName, string _courseNumber) {
	cout << "In P2 constructor" << endl;
	setCourseName(_courseName);
	setCourseNumber(_courseNumber);
	final_score = nullptr;
}

GradeBook::GradeBook(string _courseName, string _courseNumber, int* _final_score) {
	cout << "In P3 constructor" << endl;
	setCourseName(_courseName);
	setCourseNumber(_courseNumber);
	final_score = _final_score;
}

GradeBook::GradeBook(const GradeBook& original) {
	cout << "Copy constructor called" << endl;
	setCourseName(original.getCourseName());
	setCourseNumber(original.getCourseNumber());
	final_score = new int;
	*final_score = *(original.final_score);
}

// Assignment overload
GradeBook& GradeBook::operator=(const GradeBook& rhs) {
	cout << "Assignment overload called" << endl;
	if (this != &rhs) {
		setCourseName(rhs.getCourseName());
		setCourseNumber(rhs.getCourseNumber());
		delete final_score;
		final_score = new int;
		*final_score = *(rhs.final_score);
	}
	return *this;
}


// Destructor
GradeBook::~GradeBook() {
	cout << "Destructor called" << endl;
	delete final_score;
}


// Member functions
void GradeBook::setCourseName(string _courseName) {
	courseName = _courseName;
}
std::string GradeBook::getCourseName() const {
	return courseName;
}
void GradeBook::setCourseNumber(string _courseNumber) {
	courseNumber = _courseNumber;
}
string GradeBook::getCourseNumber() const {
	return courseNumber;
}
void GradeBook::displayMessage() const {
	cout << "The course name is " << getCourseName();
	cout << ". The course number is " << getCourseNumber();
	if (final_score != nullptr) {
		cout << ". The course grade is " << *final_score;
	}
	cout << endl;
}