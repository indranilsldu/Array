#include <bits/stdc++.h>
using namespace std;

int main()
{
   int sizeOfFirstArray,sizeOfSecondArray,temp,c=0;
   cout << "Enter the size of first array: ";
   cin >> sizeOfFirstArray;
   cout << "Enter the size of second array: ";
   cin >> sizeOfSecondArray;
   int firstArray[sizeOfFirstArray],secondArray[sizeOfSecondArray],mergedArray[sizeOfFirstArray+sizeOfSecondArray];
   cout << "Enter the first array elements one by one:\n";
   for(int i=0;i<sizeOfFirstArray;i++)
   {
       cin >> temp;
       firstArray[i] = temp;
   }
   cout << "Enter the second array elements one by one:\n";
   for(int i=0;i<sizeOfSecondArray;i++)
   {
       cin >> temp;
       secondArray[i] = temp;
   }
   cout << "Array elements before merging:\n";
   cout << "=====================\n";
   cout << "First array\n";

   for(int i=0;i<sizeOfFirstArray;i++)
       cout << firstArray[i] << "\n";

   cout << "=====================\n";
   cout << "=====================\n";
   cout << "Second array\n";

   for(int i=0;i<sizeOfSecondArray;i++)
       cout << secondArray[i] << "\n";

   cout << "=====================\n";

   for(int i=0;i<sizeOfFirstArray;i++)
       mergedArray[i] = firstArray[i];

   for(int i=sizeOfFirstArray;i<sizeOfFirstArray+sizeOfSecondArray;i++)
       mergedArray[i] = secondArray[i-sizeOfFirstArray];

   cout << "Array elements after merging:\n";

   for(int i=0;i<sizeOfFirstArray+sizeOfSecondArray;i++)
       cout << mergedArray[i] << "\n";
}

