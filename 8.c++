#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

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

        cout << "\n";
    }
}

/*

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/