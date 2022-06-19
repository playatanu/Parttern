#include "iostream"
#include "init.h"

using namespace std;

int main()
{

  Init size = Init();

  for (int i = size.zero; i < size.row; i++)
  {

    for (int k = size.column; k > i; k--)
    {
      cout << "  ";
    }

    for (int l = 0; l < i; l++)
    {
      cout << " *";
    }

    cout << "\n";
  }

  for (int i = size.row; i > size.zero; i--)
  {

    for (int k = i; k < size.column; k++)
    {
      cout << "  ";
    }

    for (int l = 0; l < i; l++)
    {
      cout << " *";
    }

    cout << "\n";
  }
}

/*

         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *
*/