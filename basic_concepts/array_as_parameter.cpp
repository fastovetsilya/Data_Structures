#include<iostream>

using namespace std; 

// void fun(int *A, int n) // Arrays are always passed by address
// {
//     // cout<<sizeof(A)/sizeof(int)<<"\n"<<endl;
//     // for(int i=0;i<5;i++) //Only for loop because of pointer
//     // {
//     //     cout<<A[i]<<endl;
//     // }
//     A[0]=15;
// }

int * fun(int size)
{
    int *p; 
    p=new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;
}

// int main()
// {
//     int A[ ]={2,4,6,8,10};
//     int n=5;
//     fun(A,n);
//     // cout<<sizeof(A)/sizeof(int)<<"\n"<<endl;
//     for(int x:A)
//     cout<<x<<endl;
//     return 0;
// }

int main()
{
    int *ptr,sz=5;

    ptr=fun(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}