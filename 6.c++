#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = size.zero; i < size.row; i++)
    {
        for (int j = size.zero; j <= i; j++)
        {
            cout << char(65 + j) << " ";
        }
        cout << "\n";
    }
}

/*/

A
A B
A B C
A B C D
A B C D E

/*/
