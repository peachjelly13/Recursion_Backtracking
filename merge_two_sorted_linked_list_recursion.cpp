#include<bits/stdc++.h>
using namespace std;

//with recursion without recurison done in linkedlist practice
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};
void print_a_linked_list(Node * head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << endl;
        temp = temp->next;

    }
}

Node* merge_two_sorted_linked_list(Node* l1, Node* l2){
    if(l1==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }
    if(l1->data<l2->data){
        l1->next = merge_two_sorted_linked_list(l1->next,l2);
        return l1;
    }
    else{
        l2->next = merge_two_sorted_linked_list(l1,l2->next);
        return l2;
    }

}


int main(){
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    Node* l2 = new Node(2);
    l2->next = new Node(2);
    print_a_linked_list(merge_two_sorted_linked_list(l1,l2));

    
}