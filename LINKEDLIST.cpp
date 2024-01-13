#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
		
		Node(int data){
			
			this->data=data;
			this->next=NULL;
		}
	
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
	
	Node* temp=new Node(d);
	tail->next=temp;
	tail=temp;
	
}

void insertAtPosition(Node* &head, Node* &tail,int position ,int d){
	if(position==1){
		insertAtHead(head,d);
		return;	
	}
	
	Node* temp=head;
	int cnt=1;
	
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	
	if(temp->next == NULL){
		insertAtTail(tail,d);
		return;
	}
	
	Node* nodeToInsert=new Node(d);
	nodeToInsert -> next=temp->next;
	temp->next=nodeToInsert;
}




void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}



int main(){
	
	Node* node1=new Node(10);
	
	Node* head=node1;
	Node* tail=node1;
	print(head);
	insertAtTail(tail,20);
	insertAtTail(tail,30);
	insertAtTail(tail,40);
	insertAtPosition(head,tail,2,25);
	print(head);
	
	
	
}
