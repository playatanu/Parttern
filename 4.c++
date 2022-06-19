#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = size.row; i > size.zero; i--)
    {
        for (int j = size.zero; j < i; j++)
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