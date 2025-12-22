
#include <iostream>
#include <vector>
using namespace std;

struct Course{
	string name;
	int credit;
	double marks;
	double gpa;
	char grade;
};

void CalGrade(Course &c){
	if(c.marks>=84){ c.grade = 'A'; c.gpa = 4.0;}
	else if(c.marks>=70){c.grade = 'B'; c.gpa = 3.0;}
	else if(c.marks>=60){c.grade = 'C'; c.gpa = 2.0;}
	else if(c.marks>=50){c.grade = 'D'; c.gpa = 1.0;}
	else {c.grade = 'F'; c.gpa = 0.0;}
}

int main()

{
	/* Muhammad Mahad Niaz*/
	int numCourses;
	double totalCredits = 0, totalGpa = 0;
	cout << "Enter Number of Courses: ";
	cin >> numCourses;
	vector<Course> courses(numCourses);
	for(int i=0; i< numCourses; i++){
		cout << "\nCourse " << i +1 << " name: ";
		cin >> courses[i].name;
		cout << "\nCourse " << i +1 << " Credit Hours: ";
		cin >> courses[i].credit;
		cout << "\nCourse " << i +1 << " Obtained Marks: ";
		cin >> courses[i].marks;
	
		CalGrade(courses[i]);
		totalCredits += courses[i].credit;
		totalGpa += courses[i].gpa * courses[i].credit;
	}
	double CGPA = totalGpa / totalCredits;
	cout << " \nCourse Wise Grades:\n";
	cout << "Course\tCredit\tMarks\tGPA\tGrade\n";
	for (int i=0; i< courses.size(); i++){
		cout << courses[i].name << "\t" << courses[i].credit << "\t" << courses[i].marks << "\t" << courses[i].gpa << "\t" << courses[i].grade << endl;
	}
	cout << "\nTotal Credits: " << totalCredits;
	cout << "\nCGPA: " << CGPA << endl;
	
}

