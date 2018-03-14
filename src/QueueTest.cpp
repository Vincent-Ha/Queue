/**

 * Vincent Ha

 * CIS 22C, Winter 2017

 */

#include "Queue.h"
#include <iostream>

int main() {
	Queue Q1;
	cout << "Queue Testing" << endl;
	cout << "-------------" << endl;
	cout << "Testing get_size() (Should return 0): " << Q1.get_size() << endl;
	cout << "Testing is_empty() (Should return true): " << boolalpha
			<< Q1.is_empty() << endl;
	cout << "Testing dequeue() on an empty queue (Would throw an assertion): "
			<< endl;
	//Q1.dequeue();
	cout << "Testing get_front() on an empty queue (Would throw an assertion): "
			<< endl;
	//Q1.get_front();
	cout << "Testing print() on an empty queue (Would throw an assertion): "
			<< endl;
	//Q1.print();
	Queue Q2(Q1);
	cout << "Created a copy of an empty queue (Should return a size of 0): "
			<< Q2.get_size() << endl;
	cout << "Testing == operator (Should return Queues are equal): ";
	if (Q1 == Q2) {
		cout << "Queues are equal" << endl;
	}

	else {
		cout << "Queues are not equal" << endl;
	}

	cout << "Adding dog to the first queue (Q1) created (Should print dog): ";
	Q1.enqueue("dog");
	Q1.print();
	cout << endl;
	cout << "Adding cat to Q1 (Should print dog cat): ";
	Q1.enqueue("cat");
	Q1.print();
	cout << endl;
	cout << "Testing get_front() on Q1 (Should return dog): " << Q1.get_front()
			<< endl;
	cout << "Testing get_size() on Q1 (Should return 2): " << Q1.get_size()
			<< endl;
	cout << "Testing is_empty() on Q1 (Should return false): " << boolalpha
			<< Q1.is_empty() << endl;
	cout << "Testing dequeue() (Should now only return cat): ";
	Q1.dequeue();
	Q1.print();
	cout << endl;
	cout << "Making a copy of Q1 (Q3). Contents of Q3 (Should print cat): ";
	Queue Q3(Q1);
	Q3.print();
	cout << endl;
	cout
			<< "Testing == operator. Comparing Q1 and Q3 (Should return Queues are equal): ";
	if (Q3 == Q1) {
		cout << "Queues are equal" << endl;
	}

	else {
		cout << "Queues are not equal" << endl;
	}
	cout << "Comparing Q3 and Q2 (Should return Queues are not equal): ";
	if (Q3 == Q2) {
		cout << "Queues are equal" << endl;
	}

	else {
		cout << "Queues are not equal" << endl;
	}
	cout << "Making new Q3 and new Q2. Contents of Q3: ";
	Q3.enqueue("chicken");
	Q3.enqueue("hamster");
	Q3.print();
	cout << endl;
	cout << "Contents of Q2: ";
	Q2.enqueue("cat");
	Q2.enqueue("chicken");
	Q2.enqueue("squid");
	Q2.print();
	cout << endl;
	cout
			<< "Comparing the new Q2 and Q3 (Should return Queues are not equal): ";
	if (Q3 == Q2) {
		cout << "Queues are equal" << endl;
	}

	else {
		cout << "Queues are not equal" << endl;
	}
}

