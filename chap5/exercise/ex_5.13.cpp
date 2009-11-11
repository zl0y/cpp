#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b, c, d, e;
    a = b = c = d = e = 0;

    cout << "Enter number for a (it shouldn't be more then 30)" << endl;
    cin >> a;

    cout << "Enter nuber for b" << endl;
    cin >> b;

    cout << "Enter number for c" << endl;
    cin >> c;

    cout << "Enter number for d" << endl;
    cin >> d;

    cout << "Enter number for e" << endl;
    cin >> e;

    if( a > 30) {
        
        cout << "You have entered more than 30.... exit" << endl;
    
    } else {
        
        cout << "For a: ";
        for( int i = 0; i < a; i++ ) {
            cout << "*";
        }

        cout << endl;
    }

    if ( b > 30 ) {

        cout << "You have entered more than 30... exit!" << endl;

    } else {

        cout << "For b: ";

        for ( int i = 0; i < b; i++ ) {
            cout << "*";
        }

        cout << endl;
    }

    if ( c > 30 ) {

        cout << "You have entered more than 30... exit!" << endl;

    } else {

        cout << "For c: ";

        for ( int i =0; i < c; i++ ) {
            cout << "*";
        }

        cout << endl;
    }

    if ( d > 30 ) {

        cout << "You have entered more than 30... exit!" << endl;

        } else {

            cout << "For d: ";

            for ( int i = 0; i < d; i++ ) {
                cout << "*";
            }

            cout << endl;
        }

    if ( e > 30 ) {
        cout << "You have entered more than 30... exit!" << endl;
    } else {

        cout << "For e: ";

        for ( int i = 0; i < e; i++ ) {
            cout << "*";
        }

        cout << endl;
    }


    return 0;
}
  
