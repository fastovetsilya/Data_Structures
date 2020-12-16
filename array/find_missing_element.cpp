#include <iostream>

using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,8,9,10,11};

    // Display array
    int i; 
    for(i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    // Find the missing element in the array
    int j; 
    for(j=0+1;j<10;j++)
    {
        if(arr[j]!=arr[j-1]+1)
            cout<<"Missing element is "<<arr[j-1]+1;
    };

    return 0;
}



