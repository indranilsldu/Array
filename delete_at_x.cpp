#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,b,temp;
   cout << "Enter the number of elements: ";
   cin >> n;
   int* arr = (int*)malloc(n*sizeof(int));
   cout << "Enter the value to be deleted and the position: ";
   cin >> a >> b;
   cout << "Enter the array elements one by one\n";
   for(int i=0;i<n;i++)
   {
       cin >> temp;
       arr[i]=temp;
   }
   cout << "Array elements before deletion:\n";
   for(int i=0;i<n;i++)
   {
       cout << arr[i] << "\n";
   }
   for(int i=b;i<n;i++)
   {
       arr[i-1]=arr[i];
   }
   arr = (int*)realloc(arr,(n-1)*sizeof(int));
   cout << "Array elements after deletion:\n";
   for(int i=0;i<n-1;i++)
   {
       cout << arr[i] << "\n";
   }
   free(arr);
   return 0;
}
