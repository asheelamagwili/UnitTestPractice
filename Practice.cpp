#include "Practice.h"
#include <string>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  int my_list[3];
  my_list[0] = first;
  my_list[1] = second;
  my_list[2] = third;

  for(int i = 0;i <= 2; i++)
  {
    if(my_list[i] < my_list[i+1])
    {
      int temp = my_list[i];
      my_list[i] = my_list[i+1];
      my_list[i+1] = temp;
    }
  }

  if(my_list[2] > my_list[0])
  {
      int temp = my_list[2];
      my_list[2] = my_list[0];
      my_list[0] = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  for(int i=0; i < input.size(); i++)
  {
    if( input[i] < 'A' || input[i] > 'Z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');
    }
  }
  for(int i=0; i < input.size()/2; i++)
  {
    if( input[i] != input[input.size()-1-i] )
      return false;
  }
  return true;
}
