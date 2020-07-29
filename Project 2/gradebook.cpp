#include "gradebook.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

void Initialize(array< array<double, cols>, rows> &grades) {
	srand(time(0));

	for(int i = 0; i < rows; i++) {
		double sum = 0;
		for(int j = 0; j < cols - 1; j++) {
			grades[i][j] = rand() % 31 + 70;
			sum += grades[i][j];
		}
		grades[i][cols - 1] = (sum / (cols - 1));
	}
}

void Print(const array< array<double, cols>, rows> &grades) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < cols - 1; j++) {
			cout << setprecision(0) << fixed << grades[i][j] << "\t";
		}
		cout << setprecision(2) << fixed << grades[i][cols - 1] << endl;
	}
}

void Max(const array< array<double, cols>, rows> &grades) {
	int max = 0;
	int row = 0;
	int col = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols - 1; j++) {
			if (max < grades[i][j]) {
				max = grades[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	cout << "Max grade is: " << max << " at row " << row << " and column " << col << endl;

}
