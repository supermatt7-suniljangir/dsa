// c boilder plate code
#include <stdio.h>
// max size 100
int stack[100] = {};
int top = -1, x, i, n, choice;

void push();
void pop();
void display();

int main() {
printf("enter the size of the stack\n");
scanf("%d", &n);


do{
printf("select one of the operations below\n 1. push\n 2. pop\n 3. display\n4 . exit\n");
scanf("%d", &choice);

switch(choice){
    case 1:
    {push(); break;}
     case 2:
    {pop(); break;}
     case 3:
    {display(); break;}
    case 4:{
        printf("exiting the program, bye\n"); 
        break;
    }
    default: printf("invalid choice, try again\n");
}
}while(choice !=4);

    return 0;
}
void push(){
    if(top >= n-1){
        printf("stack overflow!");
    }
    else{
        printf("enter the new element to be inserted\n");
        scanf("%d",&x);
       stack[++top] = x; // or top++;stack[top] = x;
       printf("new element %d added to the stack\n", x);
    }
};
void pop(){
    if(top == -1){
        printf("stack underflow, no items to be removed\n");
    }
    else{
        printf("element removed %d ", stack[top]);
    stack[top] = 0;
    top--;
    }
};
void display(){
    if(top == -1){
        printf("no items to display");
    }
    else{
        printf("your items are:\n");
        for(int i = top; i>=0; i--){
            printf("%d \n", stack[i]);
        }
    }
};