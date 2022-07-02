#include<stdio.h>
#include<stdlib.h>
#define size 67

int a[size];
int front=-1,rear=-1;

void enqueue()
{
    int x;
    if(rear==size-1)
    {
        printf("The Queue's filled.\n\n");
        return;
    }
    printf("Enter the element you want to enqueue: ");
    scanf("%d",&x);
   if(front==-1 && rear==-1)
   {
    front=0;
    rear=0;
    a[rear]=x;
    return;
   }
    rear++;
    a[rear]=x;
}

void isemp()
{
    if(front==-1 && rear==-1)
    {
        printf("The Queue's empty.\n\n");
        return ;
    }
    printf("The Queue's not empty.\n\n");
}

void isfu()
{
    if(rear==size-1)
    {
        printf("The Queue's full.\n\n");
        return;
    }
    printf("The Queue's not full.\n\n");
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Ummm Queue's empty :(\n\n");
        return;
    }
    if(front==rear)
    {
        front=-1; rear=-1;
    }
    else
    {
        front=front+1;
    }
}

void pp()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("THE DAMN QUEUE IS EMPTY, THERE'S NOTHING TO SHOW!!!\n\n");
        return ;
    }
    printf("The Queue Is : ");
    printf("|");
    for(i=front;i<=rear;i++)
    {
        printf(" %d |",a[i]);
    }
    printf("\n\n");
}

int main()
{
    while(1)
    {
        int c;
        printf("Enter Your Choice:\n");
        printf("1->To see if Queue's empty.\n");
        printf("2->To see if Queue'e's full.\n");
        printf("3->Enqueue an element.\n");
        printf("4->Dequeue an elemet.\n");
        printf("5->Display Queue.\n");
        printf("6->Exit.\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
        {
            isemp();
            break;
        }
        case 2:
        {
            isfu();
            break;
        }
        case 3:
        {
            enqueue();
            break;
        }
        case 4:
        {
            dequeue();
            break;
        }
        case 5:
        {
            pp();
            break;
        }
        case 6:
        {
            printf("Adios Mio caro...♫~★");
            exit(0);
        }
        default:
        {
            printf("IQ Lower than room temperature.....\n");
            printf("\n");
        }
        }
    }
}
