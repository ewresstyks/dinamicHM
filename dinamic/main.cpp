

#include <iostream>
using namespace std;

int main() {
    
 int size;
 cout << "enter your size ->";
 cin >> size;

 int* arr = new int[size];
    
 cout << "enter your " << size << " elements ->";
 for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

 cout << "first array ->";
 for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
 cout << endl;

 int* arr2 = new int[size + 1];
 for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
 arr2[size] = 100;

 cout << "second array -> ";
 for (int i = 0; i < size + 1; i++)
    {
        cout << arr2[i] << " ";
     }
 cout << endl;
 delete[] arr;
 delete[] arr2;
}
