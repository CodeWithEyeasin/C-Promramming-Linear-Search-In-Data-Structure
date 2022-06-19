#include<stdio.h>
int main()
{
    int array[500],item,i,size;
    printf("Enter An Array Size:\n");
    scanf("%d",&size);
    printf("Enter An Array Elements:\n");
    for(i=0;i<size;i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter Searching Item..\n");
    scanf("%d",&item);
    for(i=0;i<size;i++)
    {
        if(array[i]==item)
        {
            printf("Item Found Location = array[%d]\n",i);
            break;
        }
    }
    if(i>=size)
        {
            printf("Item Is Not Found\n");
        }

    return 0;
}
