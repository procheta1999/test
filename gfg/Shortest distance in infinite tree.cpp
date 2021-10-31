/*
gfg link-https://practice.geeksforgeeks.org/problems/find-the-distance-between-two-nodes4402/1

problem :- Consider you have an infinitely long binary tree having the pattern as below
               1

            /     \
           2      3  

         /  \     /   \
        4  5    6  7
    .  .  .  .   .  .  .  . 
Given two nodes with values x and y, the task is to find the length of the shortest path between the two nodes.
solution:-

*/
// C++ program to find the distance
// between two nodes in an infinite
// binary tree
#include <bits/stdc++.h>
using namespace std;

// function to find the distance
// between two nodes in an infinite
// binary tree
int Distance(int x, int y)
{
	// swap the smaller
	if (x < y) {
		swap(x, y);
	}
	int c = 0;

	// divide till x!=y
	while (x != y) {

		// keep a count
		++c;

		// perform division
		if (x > y)
			x = x >> 1;

		// when the smaller
		// becomes the greater
		if (y > x) {
			y = y >> 1;
			++c;
		}
	}
	return c;
}

// Driver code
int main()
{
	int x = 4, y = 6;
	cout << Distance(x, y);

return 0;
}
