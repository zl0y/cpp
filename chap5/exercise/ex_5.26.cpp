#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    for ( int i = 1; i <= 5; i++ ) {
        for ( int j = 1; j <= 3; j++ ) {
            for (int k = 1; k <= 4; k++ )
                cout << "*";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
