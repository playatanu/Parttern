#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    // Top Section
    for (int i = size.zero; i < size.row; i++) // Row Loop
    {

        for (int k = size.column; k > i; k--) // Column Loop
        {
            cout << "  ";
        }

        for (int l = size.zero; l < i; l++)
        {
            cout << "* ";
        }

        for (int l = size.zero; l < i - 1; l++)
        {
            cout << "* ";
        }

        cout << "\n";
    }

    // Down Section
    for (int i = size.row; i > size.zero; i--) // Row Loop
    {

        for (int k = size.column; k > i; k--) // Column Loop
        {
            cout << "  ";
        }

        for (int l = size.zero; l < i; l++)
        {
            cout << "* ";
        }

        for (int l = size.zero; l < i - 1; l++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
}

/*

       *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/