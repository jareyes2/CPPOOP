#include <iostream>
#include "GradeBook.h"
using namespace std;

void SomeFunction(GradeBook g) {
	g.setCourseName("Something else");
	g.displayMessage();
}

int main() {

	int* high_score = nullptr;
	high_score = new int;
	*high_score = 95;

	GradeBook g0;
	//GradeBook g1("Object-Oriented Software Design");
	GradeBook g2("Data Structures", "COP 4450", high_score);

	g0 = g2;

	g0.setCourseNumber("xyz");
	g0.displayMessage();
	//g1.displayMessage();
	//SomeFunction(g2);
	g2.displayMessage();

	system("pause");
	return 0;
}