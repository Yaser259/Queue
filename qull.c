/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
// #define max 10
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
void enqueue(int n){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    if(front==NULL&&rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next=temp;
    rear = temp;
}
void dequeue(){
    struct node* temp = front;
    if(front==NULL) return;
    if(front==rear){
        front = rear = NULL;
    }else{
        front = front->next;
    }
    free(temp);
}
void display(){
    struct node* temp = front;
    printf("Queue is ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
    enqueue(10);
    dequeue();
    dequeue();
    enqueue(25);
    display();
    return 0;
}
