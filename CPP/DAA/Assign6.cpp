/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 6
*/
#include <bits/stdc++.h>
using namespace std;

int sum(int freq[], int i, int j); 

int optCost(int freq[], int i, int j) { 
	if (j < i) 
		return 0; 
	if (j == i) 
		return freq[i]; 
	
	int fsum = sum(freq, i, j); 
	int min = INT_MAX; 
	
	for (int r = i; r <= j; ++r) { 
		int cost = optCost(freq, i, r - 1) + optCost(freq, r + 1, j); 
		if (cost < min) 
			min = cost; 
	} 
	
	return min + fsum; 
} 

int optimalSearchTree(int keys[], int freq[], int n) { 
	return optCost(freq, 0, n - 1); 
} 

int sum(int freq[], int i, int j) { 
	int s = 0; 
	for (int k = i; k <= j; k++) 
		s += freq[k]; 
	return s; 
} 

int main() { 
	int n;
	cout << "Enter the number of keys: ";
	cin >> n;

	int keys[n], freq[n];
	cout << "Enter the keys:\n";
	for (int i = 0; i < n; i++) {
		cin >> keys[i];
	}

	cout << "Enter the frequencies of the keys:\n";
	for (int i = 0; i < n; i++) {
		cin >> freq[i];
	}

	cout << "Cost of Optimal BST is " << optimalSearchTree(keys, freq, n); 
	return 0; 
} 


//Output
/*
Enter the number of keys: 5
Enter the keys:
2
15
10
8
7
Enter the frequencies of the keys:
2
53
4
16
58
Cost of Optimal BST is 234
*/