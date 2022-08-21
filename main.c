#include<stdio.h>
void printchar(char ch[],int l)
{
    int i;
    for(i=0;i<l;i++)
        printf("%c",ch[i]);
    printf("\n" );
}
int main() {
    char arr[]={'C','U','T','M'};
    char arr1[]={'P','K','D'};
    int l1,l2,l3,i,j;
    l1=sizeof(arr);
    l2=sizeof(arr1);
    l3=l1+l2+1;
    char arr2[l3];
    for(i=0;i<l1;i++)
    {
        if(i<l1)
        {
            arr2[i]=arr[i];
        }
    }
        arr2[i]=' ';
        i=i+1;
    for(j=0;j<l2;j++,i++)
    {
        arr2[i]=arr1[j];
    }
    printchar(arr,l1);
    printchar(arr1,l2);
    printchar(arr2,l3);
    return 0;
    }
