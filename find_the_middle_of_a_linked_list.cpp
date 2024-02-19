#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* findMiddleNodeRecursiveHelper(Node* slow, Node* fast) {
    // Base case: fast reaches the end
    if (fast == nullptr) {
        return slow;
    }

    // Recursive call with slow moving 1 step and fast moving 2 steps
    return findMiddleNodeRecursiveHelper(slow->next, fast->next->next);
}

Node* findMiddleNodeRecursive(Node* head) {
    //we create these so that the initial head not getting altered
    // Base case: handle empty or single-node lists
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Use slow and fast pointers with recursion
    Node* slow = head, *fast = head;
    return findMiddleNodeRecursiveHelper(slow, fast);
}


int main() {
    Node *l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(8);
    l1->next->next->next = new Node(3);

    Node *middle = findMiddleNodeRecursive(l1);
    cout << "Middle node: " << middle->data << endl;

    printLinkedList(l1); // Optional: Print the full list

    return 0;
}
