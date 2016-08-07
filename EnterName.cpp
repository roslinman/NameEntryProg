#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
  string first = "";
  string surname = "";
  cout << "Enter Your First Name: ";
  getline(cin, first);
//  cin >> first;
  cout <<"Enter Surname: ";
  getline(cin, surname);
//  cin >> surname;

  cout << "Hello " << first << " " << surname << endl;
}
