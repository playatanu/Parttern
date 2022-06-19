#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = 0; i < size.column; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*/

*
* *
* * *
* * * *
* * * * *
* * * * * *

/*/
