/*
  Noe Rojas
  Cracking the Code Interview:
  Chapter 1: problem 1.1
  Optimized
*/

#include <iostream>

using namespace std;

bool checkUnique(const string&);

int main()
{
  string input;
  cout << "Enter string: ";
  cin >> input;

  if(!checkUnique(input))
    cout << "False" << endl;
  else
    cout << "True" << endl;

  return 0;
}

bool checkUnique(const string& input)
{
  if(input.length() > 128)
    return false;

  bool charSet[128] = {false};

  for(int i = 0; i < input.length(); ++i)
  {
    int ASCIIval = input[i];

    if(charSet[ASCIIval])
    {
        return false;
    }

    charSet[ASCIIval] = true;
  }

  return true;
}
