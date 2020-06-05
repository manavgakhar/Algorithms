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

void insertAtIndex(ListNode* &head, int index,int value){
    ListNode* ptr1= head;
    ListNode* ptr2= head->next;
    ListNode* a= new ListNode(value);
    int count=0;
    while(count!= index){
        ptr2= ptr2->next;
        ptr1= ptr1->next;
        count++;
    }
    ptr1->next= a;
    a->next= ptr2;



}

void deleteAtHead(ListNode* &head){
    if(head== NULL){
        return;
    }
    ListNode* toBeDeleted= head;
    head= head->next;

    delete toBeDeleted;


}

void deleteAtTail(ListNode* &head){
    if(head== NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    ListNode* ptr= head;
    while(ptr->next->next!= NULL){
        ptr= ptr->next;
    }

    ListNode* toBeDeleted= ptr->next;

    ptr->next= NULL;

    delete toBeDeleted;
}

void deleteAtIndex(ListNode* &head, int index){
    if(head== NULL or head->next== NULL or index<=0){
        deleteAtHead(head);
        return;
    }

    if(index>= length(head)-1){
        deleteAtTail(head);
        return;
    }

    ListNode* temp= head;
    int count=0;
    while(count!=index-1){
        temp= temp->next;
        count++;
    }
    ListNode* toBeDeleted= temp->next;
    temp->next= temp->next->next;

    delete toBeDeleted;

}

ListNode* midPoint(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
          //ODD                  //EVEN
    while(fast->next != NULL and fast->next->next!= NULL){

        slow= slow->next;
        fast= fast->next->next;
    }

    return slow;
}

ListNode* reverseRecursive(ListNode* head){
    if(head == NULL or head->next == NULL){
        return head;
    }

     
     ListNode* newHead = reverseRecursive(head->next);

     //my Work
     ListNode* curr= head;
     curr->next->next=curr;
     curr->next= NULL;
     return newHead;
      
}

ListNode* reverseIterative(ListNode* head){
    ListNode* prev= NULL;
    ListNode* curr= head;
    while(curr!= NULL){
        ListNode* n = curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    return prev;

}   

ListNode* merge(ListNode* a, ListNode* b){
    //Base case
    if(a== NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }



    ListNode* newHead;
    if(a->val < b->val){
        newHead=a;
        newHead->next= merge(a->next,b);
    }
    else{
        newHead= b;
        newHead-> next= merge(a,b->next);
    }

    return newHead;
}


int main(){

    ListNode* head= NULL;
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,6);
    insertAtHead(head,9);
    insertAtTail(head,23);
    insertAtTail(head,45);
    insertAtIndex(head,1,69);
    display(head);
    cout<<"Deleting head"<<endl;
    deleteAtHead(head);
    display(head);
    cout<<"Deleting tail"<<endl;
    deleteAtTail(head);
    display(head);
    cout<<"Delete node at index 2"<<endl;
    deleteAtIndex(head,2);
    display(head);

    cout<<"Reversing array"<<endl;
    ListNode* newHead= reverseRecursive(head);
    display(newHead);

    cout<<"Reversing array again"<<endl;
    ListNode* newHeadAgain= reverseIterative(newHead);
    display(newHeadAgain);

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
	insertAtTail(head2, 6);
	insertAtTail(head2, 7);
    cout<<"list 2"<<endl;
    display(head2);


    ListNode* mergedHead= merge(head1,head2);

    cout<<"Merged list"<<endl;
    display(mergedHead);    



    return 0;


}