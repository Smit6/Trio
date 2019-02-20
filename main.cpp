/* file name : main.cpp
 * date modified : 2/20/2019
 * brief : program to sort 3 numbers in descending order
 * author : Kevin buffardi
 * editor : Smitkumar Contractor
 */

// includs
#include <iostream>

// using statements
using std::cout;
using std::cin;
using std::endl;

// function declarations
void sortDescending(int&,int&,int&);
void swap(int&,int&);

// main
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/* function name : sortDescending
 * function args : first, second, third (all ints)
 * brief : this function sorts three numbers from highest to lowest
 * return : void
 */
void sortDescending(int& first, int& second, int& third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/* function name : swap
 * function args : first, second (both ints)
 * brief : function swaps two ints
 * return : void
 */
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
