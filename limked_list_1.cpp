#include<iostream>
using namespace std;

class Node {
    public:
    int num;
    Node* next;

    Node(int data) {
        this->num = data;
        this->next = NULL;
    }
};

int main() {

    Node* n = new Node(583);
    cout << n->num <<endl;
    cout << n->next <<endl; 
    return 0;
}