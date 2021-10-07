#include<iostream>
using namespace std;

int Sum(int arr[],int size)
{
    int i,sum = 0;
    for(i = 0;i < size;i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {2,5,6,7,8,10,12};
    int size  = sizeof(arr)/sizeof(arr[0]);
    int sum = Sum(arr,size);
    cout<<sum;
    return 0; 
}