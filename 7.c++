#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = size.zero; i < size.row; i++) // Row Loop
    {

        for (int k = size.column; k > i; k--) // Column Loop
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

*/