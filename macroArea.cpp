// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Macro definition
#define AREA(l, b) (l * b)

// Driver Code
int main()
{
	// Given lengths l1 and l2
	int l1 = 10, l2 = 5, area;

	// Find the area using macros
	cout <<AREA(l1, l2);

	return 0;
}
