/*
  Noe Rojas
  Cracking the Code Interview:
  Chapter 1: problem 1.2
  Optimized
*/

#include <iostream>

using namespace std;

bool isPermutation(const string&, const string&);

int main()
{
  string str1, str2;

  cout << "Enter string 1: ";
  cin >> str1;
  cout << "Enter string 2: ";
  cin >> str2;

  if(isPermutation(str1, str2))
    cout << "True" << endl;
  else
    cout << "False" << endl;

  cout << endl;
  return 0;
}

bool isPermutation(const string& str1, const string& str2)
{
  if(str1.length() != str2.length())
    return false;
  else
  {
    //Assumption: input is ASCII encoding.
    //This will hold the number of unique ASCII characters.
    int characters[128] = { 0 };

    //Increment the count of ASCII characters in str1.
    for(int i = 0; i < str1.length(); ++i)
      ++characters[int(str1[i])];

    //Decrement the count of ASCII characters from str2.
    for(int i = 0; i < str2.length(); ++i)
    {
      --characters[int(str2[i])];

      //If the count is less than zero, the strings are not permutations of each other.
      if(characters[int(str2[i])] < 0)
        return false;
    }
  }
  return true;
}
