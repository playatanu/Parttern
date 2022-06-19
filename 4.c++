#include "iostream"

using namespace std;

int main()
{

    int totalRow = 5;
    int totalColumn = 6;

    for (int i = 0; i < totalColumn; i++) // Column Loop
    {

        for (int k = totalRow; k > i; k--) // Row Loop
        {
            cout << " 0";
        }

        for (int l = 0; l < i; l++)
        {
            cout << " *";
        }

        cout << "\n";
    }
}