#include <iostream>
using namespace std;

int main()
{
    int arr[100],n,temp,a,b;
    for(int i=0;i<100;i++)
    {
        arr[i] = -100;
    }
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements one by one:\n";
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    cout << "Enter the value to be inserted and in which position: ";
    cin >> a >> b;
    if(arr[b-1]!=-100)
    {
        cout << "Oops! Array index already contains element";
        return 1;
    }
    else
    {
        arr[b-1] = a;
    }
    cout << "The array elements are:\n";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "And the value inserted is: ";
    cout << arr[b-1];
    return 0;
}
