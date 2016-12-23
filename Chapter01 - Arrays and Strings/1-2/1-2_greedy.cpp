/*
  Noe Rojas
  Cracking the Code Interview:
  Chapter 1: problem 1.2
  Greedy Approach
*/

#include <iostream>

using namespace std;

bool isPermutation(string&, string&);

int main()
{
  string str1, str2;

  cout << "Enter string 1: ";
  cin >> str1;
  cout << "Enter string 2: ";
  cin >> str2;

  if(isPermutation(str1, str2))
    cout << "True." << endl;
  else
    cout << "False." << endl;


  cout << endl;
  return 0;
}

bool isPermutation(string& str1, string& str2)
{
  if(str1.length() != str2.length())
    return false;

  //Greedy - worst and best case: O(n^2)
  for(int i = 0; i < str1.length(); ++i)
  {
    for(int j = 0; j < str1.length(); ++j)
    {
      if(str1[i] < str1[j])
      {
        char temp1 = str1[i];
        str1[i] = str1[j];
        str1[j] = temp1;
      }

      if(str2[i] < str2[j])
      {
        char temp2 = str2[i];
        str2[i] = str2[j];
        str2[j] = temp2;
      }
    }
  }

  cout << str1 << endl;
  cout << str2 << endl;

  for(int i = 0; i < str1.length(); ++i)
  {
    if(str1[i] != str2[i])
    {
      return false;
    }
  }

  return true;
}
