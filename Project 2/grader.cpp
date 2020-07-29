#include "gradebook.h"
#include <iostream>

using namespace std;

int main() {

	// Declare grades array
	array< array<double, cols>, rows> grades;
	
	Initialize(grades);
	Print(grades);
	Max(grades);

	cout << "Done!";

return 0;

}