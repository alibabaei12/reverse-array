#include<iostream>
using namespace std;

int main()
{
  // declare the size of the array and ask the user to give you the size
  int x;

  cout << "Enter the size of the array: " ;
  cin >> x;

  //declare an array and set the size to it
  int arr[x];

  //fill the array up
  cout << "Enter the numbers you want in your array: " << endl;
  for (int i = 0 ; i < x; i++)
  {
     cin >> arr[i];
  }

  // reverse the order and display
  cout << "Here is your array in reverse" << endl;
  for (int i = x-1 ; i >= 0; i--)
  {
     cout << arr[i] << " " ;
  }

}
