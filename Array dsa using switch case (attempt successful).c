#include<stdio.h>
int main()
{ 
    //array creation 
    int i,s,n,v;
    
    printf("Enter the size of array:\n");
    scanf("%d",&s);
    int a[s];
    printf("Enter The elements in the array: \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Array is:\n");
    for(i=0;i<s;i++)
    {
        printf("a[%d]\t",i);
    }
    printf("\n");
    for(i=0;i<s;i++)
    {
        printf("  %d\t",a[i]);
    }
    printf("\n");
   printf("\n#.To Display Array:\n");
   printf("+.To Insrt An Element In The Array:\n");
   printf("-.To Delete An Element From The Array:\n");
   printf("&.To Search An Element In An The Array:\n");
   printf("\n");
   printf("**********************Remember You Were The One Who Created The Array**********************\n");
   char L,b;
   scanf("%c",&b); // Don't know why this is needed here, without it you can't give any value as an input
   scanf("%c",&L);
   switch(L)
   {
       case '#':
       {
           printf("The Array is:\n");
    for(i=0;i<s;i++)
    {
        printf("a[%d]\t",i);
    }
    printf("\n");
    for(i=0;i<s;i++)
    {
        printf("  %d\t",a[i]);
    }
      
       break;}

    case '+':
   {//element insertion in an array
    printf("\n");
    printf("Enter the element which you want to insert the element:\n");
    scanf("%d",&n);
    printf("Enter the index where you want to insert the value:\n");
    scanf("%d",&v);
    if(v>=s)
    {
        printf("Go Fuck Yourself\n");
    }
    else
    {
    for(i=s-1;i>=(v-1);i--)
    {
        a[i+1]=a[i];
    }
    a[v]=n;
    for(i=0;i<s;i++)
    {
        printf("a[%d]\t",i);
    }
    printf("\n");
    for(i=0;i<s;i++)

    {
        printf("  %d\t",a[i]);
    }
    }
   
   break;}
    
    case '-':
    {//element deletion in an array
    int d;
    printf("\nEnter the index from where element is to be deleted:\n");
    scanf("%d",&d);
    if(d>=s+1)
    {
        printf("You Brain dead or what!?!?!\n");
    }
    else
    {
        for(i=d;i<=s-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("The resultant array is:\n");
        for(i=0;i<s-1;i++)
    {
        printf("a[%d]\t",i);
    }
    printf("\n");
    for(i=0;i<s-1;i++)

    {
        printf("  %d\t",a[i]);
    }
        
        
    } break;}
    
    case '&':
    {//searching an element in an array
    printf("\nEnter the element to be searched:\n");
    int e;
    scanf("%d",&e);
    for(i=0;i<s;i++)
    {
        if(a[i]==e)
        {
            printf("Here it is at %dth index!\n",i);
            break;
        }
        else
        {
            printf("The element yer lookin' for isn't available in the array you made yourself, you need to reconsider your life Geez.....\n ");
            break;
        }
    }
    break;
    }
    return 0;
    
}
}
