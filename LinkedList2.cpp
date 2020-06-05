#include <iostream>
#include <string>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val= val;
        this->next= NULL;
    }


};


void insertAtHead(ListNode* &head, int data){

    ListNode* n= new ListNode(data);
    // *n.next= head;
    n->next = head;
    head= n;
    

}

void display(ListNode* head){
    ListNode* ptr= head;
    while(ptr != NULL){
        cout<< ptr->val<<" -> ";
        ptr= ptr->next;
    }
    cout<<"NULL"<<endl;
}

int length(ListNode* head){
    ListNode* ptr= head;
    int count=0;
    while(ptr!= NULL){
        count+=1;
        ptr= ptr->next;
    }
    return count;
}

void insertAtTail(ListNode* &head, int data){
    if(head== NULL){
        //no node inside linked list
        //no diff b/w insert at head and insert at tail
        insertAtHead(head,data);
        return;
    }
    ListNode* n= new ListNode(data);

    ListNode* temp= head;

    while(temp->next!=NULL){
        temp= temp-> next;
    }
    temp->next= n;


}

ListNode* reverseIter(ListNode* head){
    ListNode* curr=  head;
    ListNode* prev= NULL;
    ListNode* n;

    while(curr != NULL){
        n= curr->next;
        curr->next= prev;
        prev= curr;
        curr=n;


    }
    head= prev;
    return head;


}

ListNode* reverseRec(ListNode* head){
    if(head== NULL or head->next== NULL){
        return head;
    }

    ListNode* newHead= reverseRec(head->next);

    ListNode* curr=head;
    curr->next->next=curr;
    curr->next=NULL;
    return newHead;


}

ListNode* merge(ListNode* a, ListNode* b){

    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }


    ListNode* newHead;
    if(a->val<b->val){
        newHead= a;
        newHead->next= merge(a->next,b);
    }
    else{
        newHead=b;
        newHead->next= merge(a,b->next);
    }


    return newHead;
}

ListNode* kReverse(ListNode* head, int k){
    if (head == NULL or head->next == NULL) {
		return head;
	}


    int count=1;
    ListNode* prev= NULL;
    ListNode* curr= head;



    while(count<=k and curr!=NULL){
        ListNode* n= curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
        count++;
    }

    head->next= kReverse(curr,k);

    ListNode* newHead= prev;
    return newHead;


    
}


ListNode* kAppend(ListNode* head,int k){
    ListNode* prev=NULL;
    ListNode* curr=head;
    int n= length(head);
    int count=0;
    while(count!= n-k){
        prev=curr;
        curr= curr->next;
        count++;
    }

    prev->next= NULL;
    ListNode* newcurr;
    newcurr= curr;
    while(newcurr->next != NULL){
        newcurr= newcurr->next;
    }
    newcurr->next= head;
    head= curr;
    return head;
}

int kElemfromEnd(ListNode* head, int k){
    ListNode* second= head;
    ListNode* first= head;
    int count=1;
    while(count!= k){
        first= first->next;
        count++;
    }

    while(first->next != NULL){
        second= second->next;
        first= first->next;
    }

    return second->val;


}



int main(){


    cout<<"Merging linked lists";

    ListNode* head1 = NULL;

	insertAtTail(head1, 1);
	insertAtTail(head1, 3);
	insertAtTail(head1, 5);
	insertAtTail(head1, 8);
	insertAtTail(head1, 9);
    cout<<"list 1"<<endl;
    display(head1);

	ListNode* head2 = NULL;

	insertAtTail(head2, 2);
	insertAtTail(head2, 4);
	insertAtTail(head2, 8);
	insertAtTail(head2, 7);
    insertAtTail(head2,10);
    insertAtTail(head2,13);

    cout<<"list 2"<<endl;
    display(head2);


    ListNode* mergedHead= merge(head1,head2);

    cout<<"Merged list"<<endl;
    display(mergedHead); 


    cout<<"Appending last 2 elements to front of following list"<<endl;
    display(head1);

    cout<<"New List"<<endl;
    ListNode* appendK= kAppend(head1,2);
    display(appendK);

    ListNode* head3 = NULL;

	insertAtTail(head3, 2);
	insertAtTail(head3, 4);
	insertAtTail(head3, 8);
	insertAtTail(head3, 7);
    insertAtTail(head3,10);
    insertAtTail(head3,13);


    cout<< "2nd elem from end"<<endl;

    cout<< kElemfromEnd(head3,2);

    





    return 0;


}