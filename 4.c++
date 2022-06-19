#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = size.column; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*

* * * * * *
* * * * *
* * * *
* * *
* *
*

*/