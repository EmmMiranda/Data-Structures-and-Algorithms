#include <iostream>


void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg);

using namespace std;

int main()
{
	TowersOfHanoi(3, 'a', 'b', 'c');
	return 0;
}

void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg)
{
	// if only one disk, make the move and return
	if (n == 1) {
		printf("\nMove disk 1 from peg %c to peg %c", frompeg, topeg);
		return;
	}

	// move top n-1 disks from A to B, using C as auxiliary
	TowersOfHanoi(n-1, frompeg, auxpeg, topeg);

	// move remaining disks from A to C
	printf("\nMove disk %d from peg %c to peg %c", n, frompeg, topeg);

	// move n-1 disks from B to C using A as auxiliary
	TowersOfHanoi(n-1, auxpeg, topeg, frompeg);
}
