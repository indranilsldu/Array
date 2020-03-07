#include <bits/stdc++.h>
using namespace std;

void show(int arr[],int n)
{
    if(n==0)
        return;
    else
    {
        show(arr,n-1);
        cout << arr[n-1] << "\n";
    }
}

void reverse(int arr[],int n)
{
    if(n==0)
        return;
    else
    {
        cout << arr[n-1] << "\n";
        reverse(arr,n-1);
    }
}

int main()
{
    int sizeOfArray,temp;
    cout << "Enter the number of elements: ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    cout << "Enter the array elements one by one\n";
    for(int i=0;i<sizeOfArray;i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    cout << "The array elements are\n";
    show(arr,sizeOfArray);
    cout << "The array elements in reverse order are\n";
    reverse(arr,sizeOfArray);
    return 0;
}
