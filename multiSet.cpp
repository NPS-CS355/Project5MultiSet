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
	set1.insert(10);
	set1.insert(20);
	set1.insert(30);
	set1.insert(40);
	set1.insert(50);

	// Add duplicate values to signify
	// that it is a multiset instead of a
	// set. (In sets, duplicate values can
	// not be stored. This is the main 
	// difference between sets and multisets)
	set1.insert(10);
	set1.insert(50);
	set1.insert(50);

	// Copy the elements from set1 into
	// set2 (This will store the elements 
	// in increasing order)
	multiset<int> set2(set1.begin(), set1.end());
	
	// Create an iterator
	multiset<int>::iterator itr;

	// Cycle through the values to print
	// all items in multiset1
	cout << "Multiset1 (Decreasing order): ";
	for(itr = set1.begin(); itr != set1.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;
	cout << "Size of Multiset1: " << set1.size() << endl;
	cout << endl;

	// Cycle through the values to print 
	// all items in multiset2
	cout << "Multiset2 (Increasing Order): ";
	for(itr = set2.begin(); itr != set2.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;
	cout << "Size of Multiset2: " << set2.size() << endl;
        cout << endl;

	// Delete all instances of a duplicate number in set1
	cout << "Deleting duplicate value 10 from Multiset1." << endl;
	int set1Num;
	set1Num = set1.erase(10);
	cout << set1Num << " values deleted." << endl << endl;

	// Delete all instances of a duplicate number in set2
	cout << "Deleting duplicate value 50 from Multiset2." << endl;
	int set2Num;
	set2Num = set2.erase(50);
	cout << set2Num << " values deleted." << endl << endl;

	// Print out set1 again to show deleted value
	cout << "Multiset1 (Decreasing order): ";
	for(itr = set1.begin(); itr != set1.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;
	cout << "Size of Multiset1 (After deletion): " << set1.size() << endl;
	cout << endl;

	// Print out set2 again to show deleted value
	cout << "Multiset2 (Increasing order): ";
	for(itr = set2.begin(); itr != set2.end(); ++itr){
		cout << *itr << " ";
	}
	cout << endl;
	cout << "Size of Multiset2 (After deletion): " << set2.size() << endl;
	cout << endl;

	// Search for a value in set1 and 2
	int val = 10;
	cout << "Searching for value " << val << endl;

	// In set1
	if(set1.find(val) != set1.end())
		cout << "Multiset1 contains " << val << endl;
	else
		cout << "Multiset1 does not contain " << val << endl;

	// In set2
	if(set2.find(val) != set2.end())
		cout << "Multiset2 contains " << val << endl;
	else
		cout << "Multiset2 does not contain " << val << endl;

	cout << endl;

	// Clear the sets
	cout << "Clearing all Multisets." << endl;
	set1.clear();
	set2.clear();
	
	if(set1.empty() == true){
		cout << "Multiset1 is now empty." << endl;
	}

	if(set2.empty() == true){
		cout << "Multiset2 is now empty." << endl;
	}

	return 0;
}
