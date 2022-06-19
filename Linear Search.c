#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},item,i;
    printf("Enter Searching Item..\n");
    scanf("%d",&item);
    for(i=0;i<5;i++)
    {
        if(a[i]==item)
        {
            printf("Item Found Location = a[%d]\n",i);
            break;
        }
    }
    if(i>=5)
        {
            printf("Item Is Not Found\n");
        }



    return 0;
}
