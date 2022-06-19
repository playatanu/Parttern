#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    // 8

    for (int i = size.zero; i < size.row + 1; i++) // Row Loop
    {

        for (int k = size.column; k > i; k--) // Column Loop
        {
            cout << "  ";
        }

        for (int l = 0; l < i; l++)
        {
            cout << l + 1 << " ";
        }

        for (int l = 0; l < i - 1; l++)
        {
            cout << l + i << " ";
        }

        cout << "\n";
    }
}

/*/

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

/*/
