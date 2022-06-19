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
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

/*/

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

/*/
