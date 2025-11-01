#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    int w;

    while (q != -1) {  
        cout << "(:have FUN!(:\n";
        cout << "Input your number:";
        cin >> q;

        if (q >= 0) {
            w = q % 2;
            cout << q << " mod 2 = " << w << "\n"; 
            if ( w == 1) {
                cout << q << " = (odd)\n";
            } else {
                cout << q << " = (even)\n";    
            } 
        }
    }
    return 0;
}