#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main(){
	
	// Create an empty multiset container
	// (This will store the elements in 
	// decreasing order)
	multiset<int, greater<int>> set1;

	// Insert elements in random order
	set1.insert(12);
	set1.insert(25);
	set1.insert(39);
	set1.insert(7);
	set1.insert(4);

	// Add a duplicate value to signify
	// that it is a multiset instead of a
	// set. (In sets, duplicate values can
	// not be stored. This is the main 
	// difference between sets and multisets)
	set1.insert(7);

	// Copy the elements from set1 into
	// set2 (This will store the elements 
	// in increasing order)
	multiset<int> set2(set1.begin(), set1.end());
	
	// Create an iterator to cycle through 
	// the values to print all items in 
	// the multiset1 
	multiset<int>::iterator itr;
	cout << "Multiset1 (Decreasing order): ";
	for(itr = set1.begin(); itr != set1.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;

	// Cycle through the values to print 
	// all items in multiset2
	cout << "Multiset2 (Increasing Order): ";
	for(itr = set2.begin(); itr != set2.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;

	return 0;
}
