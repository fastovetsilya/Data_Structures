#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n];
    A[0]=2;

    for(int x:A)
    {
        cout<<x<<endl;
    }

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);

    return 0;
}