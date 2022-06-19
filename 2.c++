#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = size.zero; i < size.row; i++)
    {
        for (int j = size.zero; j < size.column; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

/*/

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

/*/
