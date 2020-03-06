#include <iostream>
using namespace std;

int main()
{
   int sizeOfArray,temp;
   cout << "Enter the number of elements(even number): ";
   cin >> sizeOfArray;
   int arr[sizeOfArray],splitArray1[sizeOfArray/2],splitArray2[sizeOfArray/2];
   cout << "Enter the array elements one by one\n";
   for(int i=0;i<sizeOfArray;i++)
   {
       cin >> temp;
       arr[i]=temp;
   }
   cout << "Array elements before splitting:\n";
   for(int i=0;i<sizeOfArray;i++)
   {
       cout << arr[i] << "\n";
   }
   for(int i=0;i<sizeOfArray/2;i++)
   {
       splitArray1[i] = arr[i];
   }
   for(int i=sizeOfArray/2;i<sizeOfArray;i++)
   {
       splitArray2[i-sizeOfArray/2] = arr[i];
   }
   cout << "Array elements after splitting:\n";
   cout << "First array\n";
   cout << "=====================\n";
   for(int i=0;i<sizeOfArray/2;i++)
   {
       cout << splitArray1[i] << "\n";
   }
   cout << "=====================\n";
   cout << "Second array\n";
   cout << "=====================\n";
   for(int i=0;i<sizeOfArray/2;i++)
   {
       cout << splitArray2[i] << "\n";
   }
   cout << "=====================\n";
}
