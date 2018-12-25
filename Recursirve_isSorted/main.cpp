#include <iostream>

using namespace std;

int isArraySorted(int A[], int n);

int main()
{
	int sz = 5;
	
	int a[] = {1, 2, 3, 4, 5};	
	cout << "Is array sorted? " << isArraySorted(a, sz) << '\n';

	sz = 5;
	int b[] = {1, 3, 2, 4, 5};	
	cout << "Is array sorted? " << isArraySorted(b, sz) << '\n';

	return 0;
}

int isArraySorted(int A[], int n) {
	if(n == 1)
		return 1;
	return (A[n-1] < A[n-2] ? 0 : isArraySorted(A, n-1));
}
