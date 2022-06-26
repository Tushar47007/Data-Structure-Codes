#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head; 

// Function to ccreate node
void create()
{
   int n,i,x;
   printf("How many numbers you want to insert?\n");
   scanf("%d",&n);
   printf("Enter the numbers in linked list.\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&x);
    insert(x);
   }
}
// Function to insert from beginning
void insert(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

// Function to print Linked list
void pp()
    {
        struct node *pp=head;
        printf("The Linked List is : ");
        while(pp!=NULL)
        {
            printf(" %d ",pp->data);
            pp=pp->next;
        }
        printf("\n");
    }

// Function to insert at nth place
void insen()
{
   int t,f;
    printf("Enter the element at nth place:\n");
   scanf("%d",&t);
   printf("Enter the value of n(Index):\n");
   scanf("%d",&f);
    struct node*temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=t;
    temp1->next=NULL;
    if(f==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct node* temp2=head;
    for(int i=0;i<f-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;

}

//Function to delete element from nth place
void del()
{
    int j,k;
    printf("Enter the Position From where to Remove The element:\n");
    scanf("%d",&j);
    struct node* temp1=head;
    if(j==1)
    {
        head=temp1->next;
        free(temp1);
        return;
 
    }
    for(int i=0;i<j-2;i++)
    {
        temp1=temp1->next;
        struct node* temp2 = temp1-> next;
        temp1 -> next=temp2->next;
        free(temp2);
    }
}
// Function to reverse the linked list
void rev()
{
    struct node *current, *prev, *next;
    current = head;
    prev = NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current = next;
    }
    head = prev;
}
// Function to add element at the end
void end()  
{
    int g,i,n;
    struct node *end=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for last node: ");
    scanf("%d",&g);
    end->data=g;
    end->next=NULL;
    struct node *temp = head;
    while(temp->next != NULL){
       temp = temp->next;
    }

     temp->next = end;
    
}
    


//  Main Function
int main()
{
   head=NULL;
   int j;
   while(1)
   {
   printf("\nEnter the operation you want to perform on the linked list:\n");
   printf("\n");
   printf("1->Create / Insert At beginning if already created.\n");
   printf("2->Insert At Nth position.\n");
   printf("3->Insert At The End position.\n");
   printf("4->Deletion Of An Element.\n");
   printf("5->Reverse the linked list.\n");
   printf("6->Display The Linked List.\n");
   printf("7->.Exit.\n");
   scanf("%d",&j);
   switch(j)
   {
    case 1:
    {
        create();
        break;
    }
    case 2:
    {
        insen();
        break;
    }
    case 4:
    {
        del();
        break;
    }
    case 3:
    {
        end();
        break;
    }
    case 5:
    {
        rev();
        break;
    }
    case 6:
    {
        pp();
        break;
    }
    case 7:
    {
        exit(0);
    }
   }
  
   }
}