#include "SimpleGradeBook.h"
using namespace std;

int main() {

	//SimpleGradeBook g0;
	SimpleGradeBook g1("Object-Oriented Software Design", "COP 3331", 90);
	SimpleGradeBook g2("Data Structures", "COP 4450", 55);

	g1.displayMessage();
	g2.displayMessage();
	
	
	//system("pause");
	return 0;
}