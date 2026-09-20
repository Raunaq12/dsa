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

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrtoLL(arr);
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << "\n";
    cout<<freq(head);
    cout << "\n";
    cout<<presentinLL(head, 5);
    
}