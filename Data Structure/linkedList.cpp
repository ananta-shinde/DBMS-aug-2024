#include<stdio.h>
#include<stdlib.h>
typedef struct node{
     int data;
     node* next;
}node;

node* insertAtStart(node* head,int data){
    node* p = (node*)malloc(sizeof(node));
    p->data = data;
    p->next = NULL;
    if(head == NULL){
        head = p;
        return head;
    }else{
        p->next = head;
        head = p;
        return head;
     }
}

node* inesertAtPosition(node* head,int data,int pos)
{
    node* p = (node*)malloc(sizeof(node));
    node * temp = head;
    p->data = data;
    p->next = NULL;
    if(pos == 1){
        p->next = head;
        head = p;
        return head;
    }else{
       for(int i=1;i<pos-1;i++){
           temp = temp->next;
       }
       p->next = temp->next;
       temp->next = p;
       return head;
    }

}

node * insertAtEnd(node* head,int data){
     // insert at end
    //1. allocate new node
    node* temp = head;
    node* p =(node*)malloc(sizeof(node));
    //2.put data into node
    p->data = data;
    p->next = NULL;
    //3. if list is empty assign p to head
    if(head == NULL){
        head = p;
        return head;
    }
    else{
       
        //4. if list is not empty iterate to last node
         while(temp->next !=NULL)
         {
            temp= temp->next;
         }
        //5.assign new node to temp->next
        temp->next = p;
        return head;
    }

   
}

void printList(node* head){
     // printing list
    node* temp = head;
    while(temp !=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return;
}

int main()
{
    node* head = NULL;
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,50);
    head = insertAtStart(head,55);
    head = insertAtStart(head,60);
    head = insertAtEnd(head,75);
    head = inesertAtPosition(head,44,5);
    printList(head);

    return 0;
}
