#include <iostream>
using namespace std;

int main()
{
   int n,a,b,temp;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[100];
   cout << "Enter the value to be inserted and the position: ";
   cin >> a >> b;
   cout << "Enter the array elements one by one\n";
   for(int i=0;i<n;i++)
   {
       cin >> temp;
       arr[i]=temp;
   }
   cout << "Array elements before insertion:\n";
   for(int i=0;i<n;i++)
   {
       cout << arr[i] << "\n";
   }
   for(int i=n-1;i>=b-1;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[b-1]=a;
   cout << "Array elements after insertion:\n";
   for(int i=0;i<n+1;i++)
   {
       cout << arr[i] << "\n";
   }
}
