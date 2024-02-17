#include <stdio.h>
#include <conio.h>
#define max 100
// a queue too can be implemented as an array, all you need to do is 
int queue[max], rear=-1, front=-1;
// rear means the front of the array or queue, or apparently queue[0] while the rear is the back end or the last index of the quque, they are initially set to -1 which means that the queue is empty
// the queue has two basic operation, insertion(enqueue) and deletion(dequeue), the insertion happens from rear end(the last index) and delection happens from front end(top of the index).

void enqueue();
void dequeue();
void display();
int isFull(){
    if(rear == max-1){
        return 1;
    }
    else return 0;
};
int isEmpty(){
    if(front == -1){
        return 1;
    }
    else return 0;
};

int main(){
int choice;
do{
printf("enter one of the operations to perfrom");
printf("\n 1. enquque\n 2. dequeue\n 3. display\n 4.exit\n");
scanf("%d", &choice);

switch (choice)
{
case 1:
    enqueue();
    break;
    case 2: 
    dequeue();
    break;
    case 3:
    display();
    break;
    case 4:
    printf("exiting the program\n");
    break;
    default:
    printf("kai esi ki tesi karave thari, 1 hu 4 tak likh\n");
}
}while(choice != 4);

    return 0;
};



void enqueue(){
    int data;
    if(isFull()){
            printf("queue overflow\n");
        }
    else{
        if(isEmpty()){
        front = 0;
    }
    printf("enter the element to be added \t");
    scanf("%d", &data);
 rear++;
 queue[rear] = data;
    printf("new element addded %d \n", data);
    }
};
void dequeue(){
    if(isEmpty()){
        printf("queue underflow, empty queue\n");
    }
    else{
        printf("element deleted %d\n", queue[front]);
        front++;
    }

};
void display(){
if(isEmpty()){
    printf("stack underflow, no items to show\n");
}
else{
    printf("the elements in the queue are: \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d \n", queue[i]);
    }
}
};
