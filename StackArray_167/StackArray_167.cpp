#include <iostream>
#include <string>
using namespace std;


class StackArray {
private:
	int stack_array[5];
	int top;

public:
	int stackArray() {
		top = -1;
	}

	void push() {
		cout << "\nEnter an Element:";
		int element;
		cin >> element;

		if (top == 4) {
			cout << "Number of data exceeds the limit." << endl;
			return;
		}
		top++;
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << "Ditambahkan(pushed)" << endl;
	} 

	void pop() {
		if (empty()) { // step 1
			cout << "\nStack is empty. cannot pop." << endl; // 1.a
			return; // 1.b
		}

		cout << "\n Th epop element is : " << stack_array[top] << endl; // step 2
		top--; // step 3 decrement

	}
};
