#include<stdio.h>
#define MAXSIZE 3
struct stack {
    int top;
    int elements[MAXSIZE];
};
typedef struct stack Stack;
int pop(void);
int push(int);
void display(void);
int main(int argc, char argv[])
{
    int a;
    while(1){
    printf("1 for pop");
    printf("\n2 for push");
    printf("\n3 for display");
    printf("\n4 for exit");
    scanf("%d",&a);
    switch(a){
    case 1: pop();
    break;
    case 2: push();
    break;
    case 3: display();
    break;
    case 4:return 0;
    default : break;
    }
    return 0;
    }
    int pop()
    {return 0;}
    int push(int value)
    {return 0;}
    void display()
    {
    }

}


