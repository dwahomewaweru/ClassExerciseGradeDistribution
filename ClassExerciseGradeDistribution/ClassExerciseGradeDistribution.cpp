// ClassExerciseGradeDistribution.cpp 

#include <iostream>
#include <String>
using namespace std;


int main() {

	cout << "  C++ Grade Distribution System \n";
	string studentname;
	int grade;
	cout << "Please Enter Full Name of Student :\n ";
	getline(cin,studentname);
	cout << "Please Student's Mark : ";
	cin >> grade;
	cin.ignore();

	if (grade >= 70) {
		cout << studentname << " Grade is A";
	}
    else if(grade>=68 && grade<=69) {
		cout << studentname << " Grade is B";
	}
    else if(grade>=58 && grade<=59) {
		cout << studentname << " Grade is C";
	}
	else if(grade >=48 && grade <=49) {
		cout << studentname << " Grade is D";
	}
	else if (grade<40) {
		cout << studentname << " Grade is F";
	}

	return 0;
}