#ifndef SimpleGradeBook_H
#define SimpleGradeBook_H

#include <string>

class SimpleGradeBook {

public:
	// Default constructor
	SimpleGradeBook();

	// Parameterized constructor
	SimpleGradeBook(std::string _courseName, std::string _courseNumber, int _finalScore);

	// Member functions
	void setFinalScore (int _finalScore);
	int getFinalScore () const;
	void displayMessage() const;
private:
	std::string courseName;
	std::string courseNumber;
	int finalScore;
};

#endif // !SimpleGradeBook_H
