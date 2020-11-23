#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// int main()
// {
//     int a=10; 
//     int *p;
//     p=&a;

//     cout<<a<<endl;
//     printf("using pointer %d\n", *p);

//     return 0;
// }

// int main()
// {
//     int *p;
//     p=(int *)malloc(5*sizeof(int));

//     p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;

//     for(int i=0;i<5;i++)
//     cout<<p[i]<<endl;
// }

int main()
{
    int *p;
    p=new int[5];

    p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;

    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    delete [ ] p;
}