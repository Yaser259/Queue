#include <stdio.h>
#define max 5
int arr[max];
int front = -1;
int rear = -1;

void enqueue(int n){
    if((rear+1)%max==front) return;
    else if(isempty()){
        front=rear=0;
    }else{
        rear = (rear + 1) % max;
    }
    arr[rear] = n;
    printf("Inserted number :: %d\n",arr[rear]);
}
void dequeue(){
    if(isempty()) return;
    else if(front==rear){
        front = rear = -1;
    }else{
        printf("Deleted number :: %d\n",arr[front]);
        front=(front+1)%max;
    }
}
int isempty(){
    if(front==-1&&rear==-1) return 1;
    else return 0;
}
int isfull(){
    if(rear==max-1) return 1;
    else return 0;
}
int peek(){
    return arr[front];
}
int main(){
    int n,s;
    printf("Enter the numbers to insert: ");
    scanf("%d",&n);
    while(n!=0){
        printf("Enter the number: ");
        scanf("%d",&s);
        enqueue(s);
        n--;
    }
    dequeue();
    dequeue();
}
