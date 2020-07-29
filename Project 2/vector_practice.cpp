#include<vector>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main() {

	srand(time(0));

	vector< double > vec(10);

	for (int v : vec) {
		v = rand() % 10;
	}

	for (int v : vec) {
		cout << v << " ";
	}
	cout << endl;

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}

	cout  << endl;

	int search;
	cout << "Please enter an int to search for: ";
	cin >> search;
	if (binary_search(vec.begin(), vec.end(), search))
		cout << "Found!" << endl;
	else
		cout << "Not found." << endl;

return 0;

}