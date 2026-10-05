#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrtoLL(vector<int> &nums){
    Node* head = new Node(nums[0]);
    Node* mover = head;
    for(int i=1;i<nums.size();i++){
        Node* temp = new Node(nums[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int freq(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int presentinLL(Node* head, int value){
    Node* temp = head;
    while(temp){
        if(temp->data==value){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
Node* deleteHead(Node* head){
        if(head==NULL) return head;
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
}
Node* printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next; 
    }
}
Node* deleteTail(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* insertatHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->next=head;
    return temp;
}

Node* insertatTail(Node* head, int val){
    if(head==NULL) {
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next=newNode;
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrtoLL(arr);
    Node* temp = head;
    cout << "\n";
    cout<<freq(head);
    cout << "\n";
    cout<<presentinLL(head, 5);
    cout << "\n";
    printLL(head);
    head = deleteHead(head);
    cout << "\n";
    printLL(head);
    cout << "\n";
    head = convertArrtoLL(arr);
    head = deleteTail(head);
    printLL(head);
    cout << "\n";
    head = insertatHead(head, 500);
    printLL(head);
    cout << "\n";
    head = insertatTail(head, 1000);
    printLL(head);
}