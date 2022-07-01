#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max];
int top=-1;
void push()
{
    int x;
    printf("Enter the element to be pushed to top:\n");
    scanf("%d",&x);
    if(top==max-1)
    {
        printf("The St4ck is full,cant push element so fuck off ^_^;\n");
        printf("\n");
        return ;
    }
    top=top+1;
    a[top]=x;

}

void pop()
{
    if(top==-1)
    {
        printf("Sorry boi the St4ck is empty.....\n");
        printf("\n");
        return ;
    }
    top=top-1;
}

void pp()
{   
    if(top==-1)
    {
        printf("Told Ya Boi St4ck is Empty :/\n");
        printf("\n");
        return;
    }
    printf("The St4ck is:\n");
    printf("-----------------\n");
    for(int i=top;i>=0;i--)
    {
        printf("|\t%d\t|\n",a[i]);
        printf("-----------------\n");
    }
    printf("\n");
}
void peek()
{
    //return a[top];
    printf("-----------------\n");
    printf("|\t%d\t|\n",a[top]);
    printf("-----------------\n");
    printf("\n");
}


int main()
{
    int a,b,c;
    
    while(1)
    {   printf("Enter your choice.\n");
        printf("1->Push An Element.\n");
        printf("2->Pop An Element.\n");
        printf("3->Peek An Element At Top.\n");
        printf("4->Display St4ck.\n");
        printf("5->Exit\n");
        printf("\n");
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
                peek();
                break;
            }
            case 4:
            {
                pp();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Can't You Read?!? -_-'\n");
                printf("\n");
            }
            
        }
        
    }
    
}