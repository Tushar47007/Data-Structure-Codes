#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

struct node* top=NULL;
void push()
{
    int x;
    printf("Enter The Value You Want To Push At The Top Of The St4ck :");
    scanf("%d",&x);
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}

void pop()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    if(top==NULL)
    {
        printf("Empty St4ck.\n\n");
        return;
    }
    top=top->next;
    free(temp);
}

void pp()
{
    struct node* temp=top;
    if(top==NULL)
    {
        printf("The St4ck Is Empty.\n\n");
        return;
    }
    printf("The St4ck is : \n");
    printf("-----------------\n");
    while(temp!=NULL)
    {
        printf("|\t%d\t|\n",temp->data);
        printf("-----------------\n");
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int c;
        printf("Enter Your Choice:\n");
        printf("1->Push an element.\n");
        printf("2->Pop an elemet.\n");
        printf("3->Display St4ck.\n");
        printf("4->Exit.\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
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
