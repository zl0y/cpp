/**
 * Сбт Сен 12 23:13:55 EEST 2009
 * Рисуем ромб :)
 * можно использовать вывод только с * или с пробелом
 * можно использовать операторы повторения
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a;
    a = 0;

    cout << "Enter digit: ";
    cin >> a;

    if( ( a % 2 ) == 0  ) {

        cout << "The digit is even, you should enter not even digit" << endl;

    } else if ( a > 19 ) {

        cout << "It's too big, try smoler digit ;)" << endl;

    } else {

        cout << "Seems all is good %)" << endl;
        cout << "..." << endl;

        for( int i = 0; i < a; i++ ) {  // for strings

            cout << i << " " << endl;
            cout << a << " " << endl;

           for( int j = a; j > a; j-- ) {

               cout << "_";
           
           }
        
        }

    
    
    }

    return 0;
}

