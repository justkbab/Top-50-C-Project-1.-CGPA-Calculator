#include <iostream>
#include <vector>
#include <iomanip>

int main() {

	// asking for size
	int SIZE;
	std::cout << "How many courses tanken: ";
	std::cin >> SIZE;

	//asking for grades and credits
	std::vector<int> credits(SIZE);
	std::vector<int> grade(SIZE);

	//Loops until it reaches the user input
	for (int i = 0; i < SIZE; i++) {
		std::cout << "Credits For Course " << i << ": ";
		std::cin >> credits[i];
		std::cout << std::endl;
	}

	for (int j = 0; j < SIZE; j++) {
		std::cout << "Grades For Course " << j << ": ";
		std::cin >> grade[j];
		std::cout << std::endl;
	}

	//displys all credits and grades
	for (size_t i = 0; i < credits.size(); i++) {
		int c = credits[i];
		int g = grade[i];
		std::cout << "Course " << i + 1 << ": " << "Credits: " << c << ", Grades: " << g << std::endl;
	}
		int totalCreditsPoints = 0;

	//adds credits and puts it into totalCreditsPoints
	for (int i = 0; i < SIZE; i++) {
		totalCreditsPoints += credits[i];
	}
	std::cout << "Total Credits = " << totalCreditsPoints << std::endl;

	// mutiply credits and grade and add it both and puts it into totalGradePoints
	double totalGradePoints = 0;
	for (size_t i = 0; i < SIZE; i++) {
		totalGradePoints += credits[i] * grade[i];
	}


	std::cout << "Total Grades " << totalGradePoints << std::endl;

	//Puts divides totalGradePoints and totalCreditsPoints and puts it into CGPA
	double CGPA;
	CGPA = totalGradePoints / totalCreditsPoints;
	//So the decimal wont show more then 2 numbers at the end
	std::cout << "Semester GPA = " << std::fixed << std::setprecision(2) << CGPA;

}