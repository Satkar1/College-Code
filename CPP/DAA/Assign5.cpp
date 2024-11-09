/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 5
*/
#include <iostream>
#include <vector>
using namespace std;

int knapsack_recursive(int W, const vector<int> &weights, const vector<int> &values, int n) {
    if (n == 0 || W == 0) {
        return 0;
    }
    if (weights[n - 1] > W) {
        return knapsack_recursive(W, weights, values, n - 1);
    } else {
        return max(values[n - 1] + knapsack_recursive(W - weights[n - 1], weights, values, n - 1),
                   knapsack_recursive(W, weights, values, n - 1));
    }
}

int main() {
    int n;
    int W;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    vector<int> weights(n);
    vector<int> values(n);
    cout << "Enter the weights of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    cout << "Enter the values of the items:\n";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    int max_value = knapsack_recursive(W, weights, values, n);
    cout << "Maximum value in Knapsack = " << max_value << endl;
    return 0;
}

//Output
/*
Enter the number of items: 3
Enter the capacity of the knapsack: 30
Enter the weights of the items:
40 20 30 
Enter the values of the items:
10 20 10
Maximum value in Knapsack = 20
*/