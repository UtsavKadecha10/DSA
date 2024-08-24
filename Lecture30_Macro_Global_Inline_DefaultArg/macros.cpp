// C++ program to illustrate the chain macros 
#include <iostream> 
using namespace std; 

// defining first macro 
#define WORKER CLERK

// defining second macro 
#define CLERK 10 

int main() 
{ 

	// checking value of worker 
	cout << WORKER; 
	
	return 0; 
}
