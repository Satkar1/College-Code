/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 3
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;

    Node(char c, int f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(Node* left, Node* right) {
        return left->freq > right->freq;
    }
};

void printCodes(Node* root, string code) {
    if (!root) return;
    if (root->ch != '#')
        cout << root->ch << ": " << code << endl;

    printCodes(root->left, code + "0");
    printCodes(root->right, code + "1");
}

void HuffmanCoding(vector<char>& chars, vector<int>& freqs) {
    int n = chars.size();
    priority_queue<Node*, vector<Node*>, Compare> minHeap;

    for (int i = 0; i < n; i++)
        minHeap.push(new Node(chars[i], freqs[i]));

    while (minHeap.size() > 1) {
        Node* left = minHeap.top();
        minHeap.pop();
        Node* right = minHeap.top();
        minHeap.pop();

        Node* temp = new Node('#', left->freq + right->freq);
        temp->left = left;
        temp->right = right;

        minHeap.push(temp);
    }

    Node* root = minHeap.top();
    printCodes(root, "");
}

int main() {
    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<int> freqs = {5, 9, 12, 13, 16, 45};

    HuffmanCoding(chars, freqs);
    return 0;
}

//output
/*
f: 0
c: 100
d: 101
a: 1100
b: 1101
e: 111
*/