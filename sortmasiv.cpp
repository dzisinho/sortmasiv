
#include <iostream>
using namespace std;

const int MAX = 10;
void printGrades(const int grades[]) {
	cout << "Grades: ";
	for (int i = 0; i < MAX; i++) {
		cout << grades[i] << " ";
	}
	cout << "\n";
}
void updateGrade(int grades[]) {
	int index, newGrade;
	cout << "Enter number grade(1-" << MAX << "): ";	
	cin >> index;
	if (index < 1 || index > MAX) {
		cout << "Invalid index\n";
		return;
	}
	cout << "Enter new grade: ";
	cin >> newGrade;
	grades[index - 1] = newGrade;
	cout << "Grade updated\n";
}
void checkScholarship(const int grades[]) {
	double sum = 0;
	for (int i = 0; i < MAX; i++) {
		sum += grades[i];
	}
	double average = sum / MAX;
	cout << "Average: " << average << "\n";

	if (average >= 10.7) {
		cout << "You are eligible for scholarship\n";
	}
	else {
		cout << "You are not eligible for scholarship\n";
	}
}
int main() {
	int grades[MAX];
	cout << "Enter 10 grades student:\n";
	for (int i = 0; i < MAX; i++) {
		cin >> grades[i];
	}
	while (true) {
		cout << "\nMenu:\n";
		cout << "1. Print grades\n";
		cout << "2. Update grade\n";
		cout << "3. Check scholarship\n";
		cout << "4. Exit\n";
		cout << "Enter choice: ";
		int choice;
		cin >> choice;
		if (choice == 1) {
			printGrades(grades);
		}
		else if (choice == 2) {
			updateGrade(grades);
		}
		else if (choice == 3) {
			checkScholarship(grades);
		}
		else if (choice == 4) {
			break;
		}
		else {
			cout << "Invalid choice\n";
		}
	}
	return 0;
		}