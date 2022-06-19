#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = 0; i < size.row; i++)
    {
        for (int j = 0; j < size.column; j++)
        {
            cout << "* ";
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
