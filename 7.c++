#include "iostream"
#include "init.h"

using namespace std;

int main()
{

    Init size = Init();

    for (int i = 0; i < size.column; i++) // Column Loop
    {

        for (int k = size.row; k > i; k--) // Row Loop
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