#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];

        arr->A[index]=x;
        arr->length++;

    }
}

int Delete(struct Array *arr,int index)
{
    int x=0;
    int i;

    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }

    return 0;
}

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            // swap(&arr->A[i],&arr->A[i-1]);
            swap(&arr->A[i],&arr->A[0]); // move to head
            return i;
        }
    }
    return -1;
}

int Get(struct Array arr, int index)
{
        if(index>=0 && index<arr.length)
            return arr.A[index];
    return -1;
}

int Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}

int Max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct Array arr={{2,4,5,6},10,5};
    
    printf("%d\n",Min(arr));
    Display(arr);

    return 0;
}