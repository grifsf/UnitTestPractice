#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{//1,2,2
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }//2,1,2
  if( second < third ) 
  {
    int temp = second;
    second = third;
    third = temp;
  }
  /*if( first < third)//2,3,1
  {
    int temp = first;
    first = third;
    third = temp;
  }*/
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  for(int i=0; i < input.size(); i++)
  {
    //input[i].tolower();
    if( input[i] >= 'a' && input[i] <='z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');//32
    }
  }
  for(int i=0; i < input.size()/2; i++)
  {
    if( input[i] != input[input.size()-1-i] )
      return false;
  }
  return true;
}
