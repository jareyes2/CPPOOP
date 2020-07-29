#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class GradeBook {

public:
	// Default constructor
	GradeBook();

	// Parameterized constructors
	GradeBook(std::string _courseName);
	GradeBook(std::string _courseName, std::string _courseNumber);
	GradeBook(std::string _courseName, std::string _courseNumber, int* _final_score);
	GradeBook(const GradeBook&);

	// Assignment overload
	GradeBook& operator=(const GradeBook& rhs);

	// Destructor
	~GradeBook();

	// Member functions
	void setCourseName(std::string _courseName);
	std::string getCourseName() const;
	void setCourseNumber(std::string _courseNumber);
	std::string getCourseNumber() const;
	void displayMessage() const;
private:
	std::string courseName;
	std::string courseNumber;
	int* final_score;
};

#endif // !GRADEBOOK_H
