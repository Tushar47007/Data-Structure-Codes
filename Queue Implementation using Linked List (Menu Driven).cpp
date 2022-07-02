#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue()
{
    int x;
    printf("Enter The Element To Be Enqueued: ");
    scanf("%d",&x);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(rear==NULL && front==NULL)
    {
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}

void dequeue()
{
    struct node* temp=front;
    if(front==NULL)
    {
        printf("Owh Hell No!! Can't Dequeue An Empty Queue :/\n\n");
        return;
    }
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        front=front->next;
    }
    free(temp);
}

void pp()
    {
        struct node *pp=front;
        if(front==NULL  && rear==NULL)
        {
            printf("Man Fuck This shyt, da queue's empty like yo brain...Wot yo wan' see mah d***?!?\n\n");
            return;
        }
         printf("The Queue is : ");
        printf("|");
        while(pp!=NULL)
        {
            printf(" %d |",pp->data);
            pp=pp->next;
        }
        printf("\n");
        printf("NOTE: THE RIGHTMOST ELEMENT IS FRONT AND LEFTMOST ONE IS REAR OF THE QUEUE!");
        printf("\n\n");
    }

int main()
{
    while(1)
    {
        int c;
        printf("Enter Your Choice:\n");
        printf("1->Enqueue an element.\n");
        printf("2->Dequeue an elemet.\n");
        printf("3->Display Queue.\n");
        printf("4->Exit.\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            pp();
            break;
        }
        case 4:
        {
            printf("Git Gud, Peace");
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
